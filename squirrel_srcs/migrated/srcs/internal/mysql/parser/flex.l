% {
#include <stdio.h>

#include <cstring>
#include <sstream>
#include <string>

#include "bison_parser.h"
#define TOKEN(name) \
  { return SQL_##name; }
  static thread_local std::stringstream strbuf;
  %
}

% option reentrant % option bison - bridge % option never -
    interactive % option batch % option noyywrap % option nounput %
        option warn % option case -insensitive % option bison -
    locations % option header - file =
    "flex_lexer.h" % option outfile =
        "flex_lexer.cpp" % option prefix =
            "ff_" % s COMMENT % x singlequotedstring

                % %
                "!=" TOKEN(OP_NOTEQUAL) ENABLE TOKEN(ENABLE) SIMPLE TOKEN(
                    SIMPLE) TEXT
                TOKEN(TEXT) OVER
                TOKEN(OVER) YEAR
                TOKEN(YEAR) INSERT_METHOD
                TOKEN(INSERT_METHOD) ";" TOKEN(OP_SEMI) BIGINT
                TOKEN(BIGINT) LIMIT
                TOKEN(LIMIT) ">" TOKEN(OP_GREATERTHAN) WITH
                TOKEN(WITH) ORDER
                TOKEN(ORDER) OPTION
                TOKEN(OPTION) LAST
                TOKEN(LAST) UNBOUNDED
                TOKEN(UNBOUNDED) PRECEDING
                TOKEN(PRECEDING) EXCEPT
                TOKEN(EXCEPT) NUMERIC
                TOKEN(NUMERIC) "<" TOKEN(OP_LESSTHAN) ACTION
                TOKEN(ACTION) BEFORE
                TOKEN(BEFORE) ">=" TOKEN(OP_GREATEREQ) CHECK
                TOKEN(CHECK) COMPACT
                TOKEN(COMPACT) FULL
                TOKEN(FULL) NATURAL
                TOKEN(NATURAL) BINARY
                TOKEN(BINARY) NATIONAL
                TOKEN(NATIONAL) ENUM
                TOKEN(ENUM) REDUNDANT
                TOKEN(REDUNDANT) "+" TOKEN(OP_ADD) CURRENT
                TOKEN(CURRENT) MERGE
                TOKEN(MERGE) TRIGGER
                TOKEN(TRIGGER) COMPRESSED
                TOKEN(COMPRESSED) "-" TOKEN(OP_SUB) FALSE
                TOKEN(FALSE) UNIQUE
                TOKEN(UNIQUE) WHERE
                TOKEN(WHERE) MINUTE
                TOKEN(MINUTE) FIRST
                TOKEN(FIRST) ON
                TOKEN(ON) PARTIAL
                TOKEN(PARTIAL) DOUBLE
                TOKEN(DOUBLE) AFTER
                TOKEN(AFTER) PRIMARY
                TOKEN(PRIMARY) MONTH
                TOKEN(MONTH) DEFERRED
                TOKEN(DEFERRED) VALUES
                TOKEN(VALUES) LONGTEXT
                TOKEN(LONGTEXT) SQL
                TOKEN(SQL) SHARED
                TOKEN(SHARED) VALIDATION
                TOKEN(VALIDATION) OR
                TOKEN(OR) VIEW
                TOKEN(VIEW) INDEX
                TOKEN(INDEX) GROUP
                TOKEN(GROUP) "*" TOKEN(OP_MUL) INPLACE
                TOKEN(INPLACE) FOREIGN
                TOKEN(FOREIGN) RESTRICT
                TOKEN(RESTRICT) SPATIAL
                TOKEN(SPATIAL) FOLLOWING
                TOKEN(FOLLOWING) DEC
                TOKEN(DEC) SELECT
                TOKEN(SELECT) NONE
                TOKEN(NONE) DISTINCT
                TOKEN(DISTINCT) TRUE
                TOKEN(TRUE) DYNAMIC
                TOKEN(DYNAMIC) BY
                TOKEN(BY) "%" TOKEN(OP_MOD) INTEGER
                TOKEN(INTEGER) SECURITY
                TOKEN(SECURITY) IS
                TOKEN(IS) DEFINER
                TOKEN(DEFINER) ROW
                TOKEN(ROW) ENFORCED
                TOKEN(ENFORCED) END
                TOKEN(END) RECURSIVE
                TOKEN(RECURSIVE) FOR
                TOKEN(FOR) TEMPTABLE
                TOKEN(TEMPTABLE) UNION
                TOKEN(UNION) NULLS
                TOKEN(NULLS) UPDATE
                TOKEN(UPDATE) ELSE
                TOKEN(ELSE) RANGE
                TOKEN(RANGE) SET
                TOKEN(SET) INVOKER
                TOKEN(INVOKER) OFFSET
                TOKEN(OFFSET) INDEXED
                TOKEN(INDEXED) FORCE
                TOKEN(FORCE) NCHAR
                TOKEN(NCHAR) AND
                TOKEN(AND) INITIALLY
                TOKEN(INITIALLY) PRECISION
                TOKEN(PRECISION) FILTER
                TOKEN(FILTER) WITHOUT
                TOKEN(WITHOUT) NOT
                TOKEN(NOT) DELETE
                TOKEN(DELETE) DEFFERRABLE
                TOKEN(DEFFERRABLE) REAL
                TOKEN(REAL) THEN
                TOKEN(THEN) UNDEFINED
                TOKEN(UNDEFINED) DEFAULT
                TOKEN(DEFAULT) CROSS
                TOKEN(CROSS) CHAR
                TOKEN(CHAR) REFERENCES
                TOKEN(REFERENCES) "^" TOKEN(OP_XOR) CASE
                TOKEN(CASE) FIXED
                TOKEN(FIXED) HOUR
                TOKEN(HOUR) NO
                TOKEN(NO) COLUMN
                TOKEN(COLUMN) LOCAL
                TOKEN(LOCAL) DROP
                TOKEN(DROP) REPLACE
                TOKEN(REPLACE) ASC
                TOKEN(ASC) "," TOKEN(OP_COMMA) DISABLE
                TOKEN(DISABLE) TABLE
                TOKEN(TABLE) ARRAY
                TOKEN(ARRAY) IF
                TOKEN(IF) EXTRACT
                TOKEN(EXTRACT) LEFT
                TOKEN(LEFT) FULLTEXT
                TOKEN(FULLTEXT) HASH
                TOKEN(HASH) ALGORITHM
                TOKEN(ALGORITHM) LOCK
                TOKEN(LOCK) DECIMAL
                TOKEN(DECIMAL) PARTITION
                TOKEN(PARTITION) CASCADE
                TOKEN(CASCADE) ADD
                TOKEN(ADD) BETWEEN
                TOKEN(BETWEEN) "<=" TOKEN(OP_LESSEQ) MATCH
                TOKEN(MATCH) ALL
                TOKEN(ALL) ROWS
                TOKEN(ROWS) JOIN
                TOKEN(JOIN) LIKE
                TOKEN(LIKE) ")" TOKEN(OP_RP) IGNORE
                TOKEN(IGNORE) INT
                TOKEN(INT) MEDIUMTEXT
                TOKEN(MEDIUMTEXT) BOOLEAN
                TOKEN(BOOLEAN) KEY
                TOKEN(KEY) EACH
                TOKEN(EACH) USING
                TOKEN(USING) RENAME
                TOKEN(RENAME) DO
                TOKEN(DO) "(" TOKEN(OP_LP) CHARACTER
                TOKEN(CHARACTER) UMINUS
                TOKEN(UMINUS) CAST
                TOKEN(CAST) GROUPS
                TOKEN(GROUPS) OUTER
                TOKEN(OUTER) NULL
                TOKEN(NULL) SMALLINT
                TOKEN(SMALLINT) EXCLUSIVE
                TOKEN(EXCLUSIVE) TEMPORARY
                TOKEN(TEMPORARY) CONSTRAINT
                TOKEN(CONSTRAINT) CREATE
                TOKEN(CREATE) "[" TOKEN(OP_LBRACKET) WHEN
                TOKEN(WHEN) IMMEDIATE
                TOKEN(IMMEDIATE) TO
                TOKEN(TO) BTREE
                TOKEN(BTREE) DAY
                TOKEN(DAY) CONFLICT
                TOKEN(CONFLICT) ROW_FORMAT
                TOKEN(ROW_FORMAT) "]" TOKEN(OP_RBRACKET) EXISTS
                TOKEN(EXISTS) INSERT
                TOKEN(INSERT) KEYS
                TOKEN(KEYS) INTO
                TOKEN(INTO) "/" TOKEN(OP_DIVIDE) CASCADED
                TOKEN(CASCADED) ISNULL
                TOKEN(ISNULL) AS
                TOKEN(AS) INNER
                TOKEN(INNER) INTERSECT
                TOKEN(INTERSECT) IN
                TOKEN(IN) "=" TOKEN(OP_EQUAL) VARCHAR
                TOKEN(VARCHAR) COPY
                TOKEN(COPY) ALTER
                TOKEN(ALTER) DESC
                TOKEN(DESC) FROM
                TOKEN(FROM) TINYTEXT
                TOKEN(TINYTEXT) FLOAT
                TOKEN(FLOAT) SECOND
                TOKEN(SECOND) WINDOW
                TOKEN(WINDOW) NOTHING
                TOKEN(NOTHING) HAVING
                TOKEN(HAVING) -
    ? [0 - 9] + "."[0 - 9] * | "." [0 - 9] *
{
  yylval->fval = atof(yytext);
  return SQL_FLOATLITERAL;
}

                                   -
    ? [0 - 9] + {
  yylval->ival = atol(yytext);
  return SQL_INTLITERAL;
}

\"[^\"\n]+\" {
    std::string s(yytext);
yylval->sval = strdup(s.substr(1, s.size() - 1).c_str());
return SQL_STRINGLITERAL;
}

[A - Za - z][A - Za - z0 - 9_]* {
  yylval->sval = strdup(yytext);
  return SQL_IDENTIFIER;
}

\' { BEGIN singlequotedstring; strbuf = std::stringstream{}; strbuf << '\'';
}

<singlequotedstring>\'\' { strbuf << '\'';
}

<singlequotedstring>[^']* {
	strbuf << yytext;
}

<singlequotedstring>\' { BEGIN 0; strbuf << '\'';
yylval->sval = strdup(strbuf.str().c_str());
return SQL_STRINGLITERAL;
}

<singlequotedstring> << EOF >> { return 0; }

[ \t\n] + {}

              .{
  return 0;
}

% %