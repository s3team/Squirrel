/**
 * lexer
 *
 *
 */


/***************************
 ** Section 1: Definitions
 ***************************/
%{


#include "bison_parser.h"
#include <stdio.h>
#include <sstream>

#define TOKEN(name) { return SQL_##name; }

static thread_local std::stringstream strbuf;
char* substr(const char* source, int from, int to);
%}
%x singlequotedstring

/***************************
 ** Section 2: Rules
 ***************************/

/* Define the output files */
%option header-file="flex_lexer.h"
%option outfile="flex_lexer.cpp"

/* Make reentrant */
%option reentrant
%option bison-bridge

/* performance tweeks */
%option never-interactive
%option batch

/* other flags */
%option noyywrap
%option nounput
%option warn
%option case-insensitive
%option prefix="hsql_"
%option bison-locations 
/* %option nodefault */


%s COMMENT

/***************************
 ** Section 3: Rules
 ***************************/
%%

--				BEGIN(COMMENT);
<COMMENT>[^\n]*	/* skipping comment content until a end of line is read */;
<COMMENT>\n 	BEGIN(INITIAL);

[ \t\n]+	/* skip whitespace */;

DEALLOCATE	TOKEN(DEALLOCATE)
PARAMETERS	TOKEN(PARAMETERS)
INTERSECT	TOKEN(INTERSECT)
TEMPORARY	TOKEN(TEMPORARY)
TIMESTAMP	TOKEN(TIMESTAMP)
DESCRIBE	TOKEN(DESCRIBE)
DISTINCT	TOKEN(DISTINCT)
NVARCHAR	TOKEN(NVARCHAR)
RESTRICT	TOKEN(RESTRICT)
TRUNCATE	TOKEN(TRUNCATE)
ANALYZE		TOKEN(ANALYZE)
BETWEEN		TOKEN(BETWEEN)
CASCADE		TOKEN(CASCADE)
COLUMNS		TOKEN(COLUMNS)
CONTROL		TOKEN(CONTROL)
DEFAULT		TOKEN(DEFAULT)
EXECUTE		TOKEN(EXECUTE)
EXPLAIN		TOKEN(EXPLAIN)
INTEGER		TOKEN(INTEGER)
NATURAL		TOKEN(NATURAL)
PREPARE		TOKEN(PREPARE)
PRIMARY		TOKEN(PRIMARY)
SCHEMAS		TOKEN(SCHEMAS)
SPATIAL		TOKEN(SPATIAL)
VARCHAR		TOKEN(VARCHAR)
VIRTUAL		TOKEN(VIRTUAL)
BEFORE		TOKEN(BEFORE)
COLUMN		TOKEN(COLUMN)
CREATE		TOKEN(CREATE)
DELETE		TOKEN(DELETE)
DIRECT		TOKEN(DIRECT)
DOUBLE		TOKEN(DOUBLE)
ESCAPE		TOKEN(ESCAPE)
EXCEPT		TOKEN(EXCEPT)
EXISTS		TOKEN(EXISTS)
EXTRACT 	TOKEN(EXTRACT)
GLOBAL		TOKEN(GLOBAL)
HAVING		TOKEN(HAVING)
IMPORT		TOKEN(IMPORT)
INSERT		TOKEN(INSERT)
ISNULL		TOKEN(ISNULL)
OFFSET		TOKEN(OFFSET)
RENAME		TOKEN(RENAME)
SCHEMA		TOKEN(SCHEMA)
SELECT		TOKEN(SELECT)
SORTED		TOKEN(SORTED)
TABLES		TOKEN(TABLES)
UNIQUE		TOKEN(UNIQUE)
UNLOAD		TOKEN(UNLOAD)
UPDATE		TOKEN(UPDATE)
VALUES		TOKEN(VALUES)
AFTER		TOKEN(AFTER)
ALTER		TOKEN(ALTER)
ARRAY		TOKEN(ARRAY)
CROSS		TOKEN(CROSS)
DELTA		TOKEN(DELTA)
FLOAT		TOKEN(FLOAT)
GROUP		TOKEN(GROUP)
INDEX		TOKEN(INDEX)
INNER		TOKEN(INNER)
LIMIT		TOKEN(LIMIT)
LOCAL		TOKEN(LOCAL)
MERGE		TOKEN(MERGE)
MINUS		TOKEN(MINUS)
ORDER		TOKEN(ORDER)
OUTER		TOKEN(OUTER)
RIGHT		TOKEN(RIGHT)
TABLE		TOKEN(TABLE)
UNION		TOKEN(UNION)
USING		TOKEN(USING)
WHERE		TOKEN(WHERE)
CALL		TOKEN(CALL)
CASE		TOKEN(CASE)
CHAR		TOKEN(CHAR)
DATE		TOKEN(DATE)
DESC		TOKEN(DESC)
DROP		TOKEN(DROP)
ELSE		TOKEN(ELSE)
FILE		TOKEN(FILE)
FROM		TOKEN(FROM)
FULL		TOKEN(FULL)
HASH		TOKEN(HASH)
HINT		TOKEN(HINT)
INTO		TOKEN(INTO)
JOIN		TOKEN(JOIN)
LEFT		TOKEN(LEFT)
LIKE		TOKEN(LIKE)
ILIKE		TOKEN(ILIKE)
LOAD		TOKEN(LOAD)
LONG		TOKEN(LONG)
NULL		TOKEN(NULL)
PLAN		TOKEN(PLAN)
SHOW		TOKEN(SHOW)
TEXT		TOKEN(TEXT)
THEN		TOKEN(THEN)
TIME		TOKEN(TIME)
VIEW		TOKEN(VIEW)
WHEN		TOKEN(WHEN)
WITH		TOKEN(WITH)
ADD			TOKEN(ADD)
ALL			TOKEN(ALL)
AND			TOKEN(AND)
ASC			TOKEN(ASC)
CSV			TOKEN(CSV)
END			TOKEN(END)
FOR			TOKEN(FOR)
INT			TOKEN(INT)
KEY			TOKEN(KEY)
NOT			TOKEN(NOT)
OFF			TOKEN(OFF)
SET			TOKEN(SET)
TBL			TOKEN(TBL)
TOP			TOKEN(TOP)
AS			TOKEN(AS)
BY			TOKEN(BY)
IF			TOKEN(IF)
IN			TOKEN(IN)
IS			TOKEN(IS)
OF			TOKEN(OF)
ON			TOKEN(ON)
OR			TOKEN(OR)
TO			TOKEN(TO)
SECOND      TOKEN(SECOND)
MINUTE      TOKEN(MINUTE)
HOUR        TOKEN(HOUR)
DAY         TOKEN(DAY)
MONTH       TOKEN(MONTH)
YEAR        TOKEN(YEAR)

INDEXED		TOKEN(INDEXED)
PRAGMA		TOKEN(PRAGMA)
REINDEX		TOKEN(REINDEX)
GENERATED	TOKEN(GENERATED)
ALWAYS		TOKEN(ALWAYS)
CHECK		TOKEN(CHECK)
CONFLICT	TOKEN(CONFLICT)
IGNORE		TOKEN(IGNORE)
REPLACE		TOKEN(REPLACE)
ROLLBACK	TOKEN(ROLLBACK)
ABORT		TOKEN(ABORT)
FAIL		TOKEN(FAIL)
AUTOINCR	TOKEN(AUTOINCR)
BEGIN		TOKEN(BEGIN)
TRIGGER		TOKEN(TRIGGER)
TEMP		TOKEN(TEMP)
INSTEAD		TOKEN(INSTEAD)
EACH		TOKEN(EACH)
ROW			TOKEN(ROW)
OVER		TOKEN(OVER)
FILTER		TOKEN(FILTER)
CURRENT		TOKEN(CURRENT)
EXCLUDE		TOKEN(EXCLUDE)
FOLLOWING	TOKEN(FOLLOWING)
GROUPS		TOKEN(GROUPS)
NO			TOKEN(NO)
OTHERS		TOKEN(OTHERS)
PRECEDING	TOKEN(PRECEDING)
RANGE		TOKEN(RANGE)
ROWS		TOKEN(ROWS)
TIES		TOKEN(TIES)
UNBOUNDED	TOKEN(UNBOUNDED)
WINDOW		TOKEN(WINDOW)
PARTITION	TOKEN(PARTITION)
ATTACH		TOKEN(ATTACH)
DETACH		TOKEN(DETACH)
DATABASE	TOKEN(DATABASE)
CAST		TOKEN(CAST)
SAVEPOINT	TOKEN(SAVEPOINT)
RELEASE		TOKEN(RELEASE)

VACUUM 		TOKEN(VACUUM)
TRANSACTION TOKEN(TRANSACTION)
DEFFERED 	TOKEN(DEFFERED)
EXCLUSIVE 	TOKEN(EXCLUSIVE)
IMEDIATE 	TOKEN(IMEDIATE)
COMMIT 		TOKEN(COMMIT)
GLOB 		TOKEN(GLOB)
MATCH 		TOKEN(MATCH)
REGEX 		TOKEN(REGEX)
NOTHING 	TOKEN(NOTHING)
NULLS 		TOKEN(NULLS)
LAST 		TOKEN(LAST)
FIRST 		TOKEN(FIRST)
DO 			TOKEN(DO)
COLLATE 	TOKEN(COLLATE)


TRUE		{
	yylval->ival = 1;
	return SQL_INTVAL;
}
FALSE		{
	yylval->ival = 0;
	return SQL_INTVAL;
}
                /* Allow =/== see https://sqlite.org/lang_expr.html#collateop */
"=="		TOKEN(EQUALS)
"!=" 		TOKEN(NOTEQUALS)
"<>" 		TOKEN(NOTEQUALS)
"<="		TOKEN(LESSEQ)
">="		TOKEN(GREATEREQ)
"||"		TOKEN(CONCAT)

[-+*/(){},.;<>=^%:?[\]|]	{ return yytext[0]; }

-?[0-9]+"."[0-9]* |
"."[0-9]*	{
	yylval->fval = atof(yytext);
	return SQL_FLOATVAL;
}

-?[0-9]+	{
	yylval->ival = atol(yytext);
	return SQL_INTVAL;
}

\"[^\"\n]+\" {
	// Crop the leading and trailing quote char
	yylval->sval = substr(yytext, 1, strlen(yytext)-1);
	return SQL_IDENTIFIER;
}

[A-Za-z][A-Za-z0-9_]* {
	yylval->sval = strdup(yytext);
	return SQL_IDENTIFIER;
}

\'                          { BEGIN singlequotedstring; strbuf = std::stringstream{}; }
<singlequotedstring>\'\'    { strbuf << '\''; }
<singlequotedstring>[^']*   { strbuf << yytext; }
<singlequotedstring>\'      { BEGIN 0; yylval->sval = strdup(strbuf.str().c_str()); return SQL_STRING; }
<singlequotedstring><<EOF>> {  /*fprintf(stdout, "[SQL-Lexer-Error] Unterminated string\n"); */ return 0; }

. { /*fprintf(stdout, "[SQL-Lexer-Error] Unknown Character: %c\n", yytext[0]); */ return 0; }


%%
/***************************
 ** Section 3: User code
 ***************************/

char* substr(const char* source, int from, int to) {
    int len = to - from;
    char* copy = (char*)malloc(len + 1);
    ;
    strncpy(copy, source + from, len);
    copy[len] = '\0';
    return copy;
}

int yyerror(const char *msg) {
    fprintf(stdout, "[SQL-Lexer-Error] %s\n",msg); return 0;
}
