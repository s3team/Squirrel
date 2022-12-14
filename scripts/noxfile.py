"""Nox sessions for the project.
"""
import nox


@nox.session
def format(session):  # pylint: disable=redefined-builtin
  session.run("yapf", "-i", "-p", "--recursive", "utils", external=True)
  session.notify("lint")


@nox.session
def format_check(session):
  assert session.run("yapf", "-d", "-p", "--recursive", "utils", external=True)


@nox.session
def lint(session):
  session.run("pylint", "utils/", external=True)
  session.notify("type_check")


@nox.session
def type_check(session):
  session.run("mypy", "utils/", external=True)
