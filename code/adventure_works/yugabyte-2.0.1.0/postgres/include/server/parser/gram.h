/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     IDENT = 258,
     FCONST = 259,
     SCONST = 260,
     BCONST = 261,
     XCONST = 262,
     Op = 263,
     ICONST = 264,
     PARAM = 265,
     TYPECAST = 266,
     DOT_DOT = 267,
     COLON_EQUALS = 268,
     EQUALS_GREATER = 269,
     LESS_EQUALS = 270,
     GREATER_EQUALS = 271,
     NOT_EQUALS = 272,
     ABORT_P = 273,
     ABSOLUTE_P = 274,
     ACCESS = 275,
     ACTION = 276,
     ADD_P = 277,
     ADMIN = 278,
     AFTER = 279,
     AGGREGATE = 280,
     ALL = 281,
     ALSO = 282,
     ALTER = 283,
     ALWAYS = 284,
     ANALYSE = 285,
     ANALYZE = 286,
     AND = 287,
     ANY = 288,
     ARRAY = 289,
     AS = 290,
     ASC = 291,
     ASSERTION = 292,
     ASSIGNMENT = 293,
     ASYMMETRIC = 294,
     AT = 295,
     ATTACH = 296,
     ATTRIBUTE = 297,
     AUTHORIZATION = 298,
     BACKWARD = 299,
     BEFORE = 300,
     BEGIN_P = 301,
     BETWEEN = 302,
     BIGINT = 303,
     BINARY = 304,
     BIT = 305,
     BOOLEAN_P = 306,
     BOTH = 307,
     BY = 308,
     CACHE = 309,
     CALL = 310,
     CALLED = 311,
     CASCADE = 312,
     CASCADED = 313,
     CASE = 314,
     CAST = 315,
     CATALOG_P = 316,
     CHAIN = 317,
     CHAR_P = 318,
     CHARACTER = 319,
     CHARACTERISTICS = 320,
     CHECK = 321,
     CHECKPOINT = 322,
     CLASS = 323,
     CLOSE = 324,
     CLUSTER = 325,
     COALESCE = 326,
     COLLATE = 327,
     COLLATION = 328,
     COLUMN = 329,
     COLUMNS = 330,
     COMMENT = 331,
     COMMENTS = 332,
     COMMIT = 333,
     COMMITTED = 334,
     CONCURRENTLY = 335,
     CONFIGURATION = 336,
     CONFLICT = 337,
     CONNECTION = 338,
     CONSTRAINT = 339,
     CONSTRAINTS = 340,
     CONTENT_P = 341,
     CONTINUE_P = 342,
     CONVERSION_P = 343,
     COPY = 344,
     COST = 345,
     CREATE = 346,
     CROSS = 347,
     CSV = 348,
     CUBE = 349,
     CURRENT_P = 350,
     CURRENT_CATALOG = 351,
     CURRENT_DATE = 352,
     CURRENT_ROLE = 353,
     CURRENT_SCHEMA = 354,
     CURRENT_TIME = 355,
     CURRENT_TIMESTAMP = 356,
     CURRENT_USER = 357,
     CURSOR = 358,
     CYCLE = 359,
     DATA_P = 360,
     DATABASE = 361,
     DAY_P = 362,
     DEALLOCATE = 363,
     DEC = 364,
     DECIMAL_P = 365,
     DECLARE = 366,
     DEFAULT = 367,
     DEFAULTS = 368,
     DEFERRABLE = 369,
     DEFERRED = 370,
     DEFINER = 371,
     DELETE_P = 372,
     DELIMITER = 373,
     DELIMITERS = 374,
     DEPENDS = 375,
     DESC = 376,
     DETACH = 377,
     DICTIONARY = 378,
     DISABLE_P = 379,
     DISCARD = 380,
     DISTINCT = 381,
     DO = 382,
     DOCUMENT_P = 383,
     DOMAIN_P = 384,
     DOUBLE_P = 385,
     DROP = 386,
     EACH = 387,
     ELSE = 388,
     ENABLE_P = 389,
     ENCODING = 390,
     ENCRYPTED = 391,
     END_P = 392,
     ENUM_P = 393,
     ESCAPE = 394,
     EVENT = 395,
     EXCEPT = 396,
     EXCLUDE = 397,
     EXCLUDING = 398,
     EXCLUSIVE = 399,
     EXECUTE = 400,
     EXISTS = 401,
     EXPLAIN = 402,
     EXTENSION = 403,
     EXTERNAL = 404,
     EXTRACT = 405,
     FALSE_P = 406,
     FAMILY = 407,
     FETCH = 408,
     FILTER = 409,
     FIRST_P = 410,
     FLOAT_P = 411,
     FOLLOWING = 412,
     FOR = 413,
     FORCE = 414,
     FOREIGN = 415,
     FORWARD = 416,
     FREEZE = 417,
     FROM = 418,
     FULL = 419,
     FUNCTION = 420,
     FUNCTIONS = 421,
     GENERATED = 422,
     GLOBAL = 423,
     GRANT = 424,
     GRANTED = 425,
     GREATEST = 426,
     GROUP_P = 427,
     GROUPING = 428,
     GROUPS = 429,
     HANDLER = 430,
     HASH = 431,
     HAVING = 432,
     HEADER_P = 433,
     HOLD = 434,
     HOUR_P = 435,
     IDENTITY_P = 436,
     IF_P = 437,
     ILIKE = 438,
     IMMEDIATE = 439,
     IMMUTABLE = 440,
     IMPLICIT_P = 441,
     IMPORT_P = 442,
     IN_P = 443,
     INCLUDE = 444,
     INCLUDING = 445,
     INCREMENT = 446,
     INDEX = 447,
     INDEXES = 448,
     INHERIT = 449,
     INHERITS = 450,
     INITIALLY = 451,
     INLINE_P = 452,
     INNER_P = 453,
     INOUT = 454,
     INPUT_P = 455,
     INSENSITIVE = 456,
     INSERT = 457,
     INSTEAD = 458,
     INT_P = 459,
     INTEGER = 460,
     INTERSECT = 461,
     INTERVAL = 462,
     INTO = 463,
     INVOKER = 464,
     IS = 465,
     ISNULL = 466,
     ISOLATION = 467,
     JOIN = 468,
     KEY = 469,
     LABEL = 470,
     LANGUAGE = 471,
     LARGE_P = 472,
     LAST_P = 473,
     LATERAL_P = 474,
     LEADING = 475,
     LEAKPROOF = 476,
     LEAST = 477,
     LEFT = 478,
     LEVEL = 479,
     LIKE = 480,
     LIMIT = 481,
     LISTEN = 482,
     LOAD = 483,
     LOCAL = 484,
     LOCALTIME = 485,
     LOCALTIMESTAMP = 486,
     LOCATION = 487,
     LOCK_P = 488,
     LOCKED = 489,
     LOGGED = 490,
     MAPPING = 491,
     MATCH = 492,
     MATERIALIZED = 493,
     MAXVALUE = 494,
     METHOD = 495,
     MINUTE_P = 496,
     MINVALUE = 497,
     MODE = 498,
     MONTH_P = 499,
     MOVE = 500,
     NAME_P = 501,
     NAMES = 502,
     NATIONAL = 503,
     NATURAL = 504,
     NCHAR = 505,
     NEW = 506,
     NEXT = 507,
     NO = 508,
     NONE = 509,
     NOT = 510,
     NOTHING = 511,
     NOTIFY = 512,
     NOTNULL = 513,
     NOWAIT = 514,
     NULL_P = 515,
     NULLIF = 516,
     NULLS_P = 517,
     NUMERIC = 518,
     OBJECT_P = 519,
     OF = 520,
     OFF = 521,
     OFFSET = 522,
     OIDS = 523,
     OLD = 524,
     ON = 525,
     ONLY = 526,
     OPERATOR = 527,
     OPTION = 528,
     OPTIONS = 529,
     OR = 530,
     ORDER = 531,
     ORDINALITY = 532,
     OTHERS = 533,
     OUT_P = 534,
     OUTER_P = 535,
     OVER = 536,
     OVERLAPS = 537,
     OVERLAY = 538,
     OVERRIDING = 539,
     OWNED = 540,
     OWNER = 541,
     PARALLEL = 542,
     PARSER = 543,
     PARTIAL = 544,
     PARTITION = 545,
     PASSING = 546,
     PASSWORD = 547,
     PLACING = 548,
     PLANS = 549,
     POLICY = 550,
     POSITION = 551,
     PRECEDING = 552,
     PRECISION = 553,
     PRESERVE = 554,
     PREPARE = 555,
     PREPARED = 556,
     PRIMARY = 557,
     PRIOR = 558,
     PRIVILEGES = 559,
     PROCEDURAL = 560,
     PROCEDURE = 561,
     PROCEDURES = 562,
     PROGRAM = 563,
     PUBLICATION = 564,
     QUOTE = 565,
     RANGE = 566,
     READ = 567,
     REAL = 568,
     REASSIGN = 569,
     RECHECK = 570,
     RECURSIVE = 571,
     REF = 572,
     REFERENCES = 573,
     REFERENCING = 574,
     REFRESH = 575,
     REINDEX = 576,
     RELATIVE_P = 577,
     RELEASE = 578,
     RENAME = 579,
     REPEATABLE = 580,
     REPLACE = 581,
     REPLICA = 582,
     RESET = 583,
     RESTART = 584,
     RESTRICT = 585,
     RETURNING = 586,
     RETURNS = 587,
     REVOKE = 588,
     RIGHT = 589,
     ROLE = 590,
     ROLLBACK = 591,
     ROLLUP = 592,
     ROUTINE = 593,
     ROUTINES = 594,
     ROW = 595,
     ROWS = 596,
     RULE = 597,
     SAVEPOINT = 598,
     SCHEMA = 599,
     SCHEMAS = 600,
     SCROLL = 601,
     SEARCH = 602,
     SECOND_P = 603,
     SECURITY = 604,
     SELECT = 605,
     SEQUENCE = 606,
     SEQUENCES = 607,
     SERIALIZABLE = 608,
     SERVER = 609,
     SESSION = 610,
     SESSION_USER = 611,
     SET = 612,
     SETS = 613,
     SETOF = 614,
     SHARE = 615,
     SHOW = 616,
     SIMILAR = 617,
     SIMPLE = 618,
     SKIP = 619,
     SMALLINT = 620,
     SNAPSHOT = 621,
     SOME = 622,
     SPLIT = 623,
     SQL_P = 624,
     STABLE = 625,
     STANDALONE_P = 626,
     START = 627,
     STATEMENT = 628,
     STATISTICS = 629,
     STDIN = 630,
     STDOUT = 631,
     STORAGE = 632,
     STRICT_P = 633,
     STRIP_P = 634,
     SUBSCRIPTION = 635,
     SUBSTRING = 636,
     SYMMETRIC = 637,
     SYSID = 638,
     SYSTEM_P = 639,
     TABLE = 640,
     TABLES = 641,
     TABLESAMPLE = 642,
     TABLESPACE = 643,
     TABLETS = 644,
     TEMP = 645,
     TEMPLATE = 646,
     TEMPORARY = 647,
     TEXT_P = 648,
     THEN = 649,
     TIES = 650,
     TIME = 651,
     TIMESTAMP = 652,
     TO = 653,
     TRAILING = 654,
     TRANSACTION = 655,
     TRANSFORM = 656,
     TREAT = 657,
     TRIGGER = 658,
     TRIM = 659,
     TRUE_P = 660,
     TRUNCATE = 661,
     TRUSTED = 662,
     TYPE_P = 663,
     TYPES_P = 664,
     UNBOUNDED = 665,
     UNCOMMITTED = 666,
     UNENCRYPTED = 667,
     UNION = 668,
     UNIQUE = 669,
     UNKNOWN = 670,
     UNLISTEN = 671,
     UNLOGGED = 672,
     UNTIL = 673,
     UPDATE = 674,
     USER = 675,
     USING = 676,
     VACUUM = 677,
     VALID = 678,
     VALIDATE = 679,
     VALIDATOR = 680,
     VALUE_P = 681,
     VALUES = 682,
     VARCHAR = 683,
     VARIADIC = 684,
     VARYING = 685,
     VERBOSE = 686,
     VERSION_P = 687,
     VIEW = 688,
     VIEWS = 689,
     VOLATILE = 690,
     WHEN = 691,
     WHERE = 692,
     WHITESPACE_P = 693,
     WINDOW = 694,
     WITH = 695,
     WITHIN = 696,
     WITHOUT = 697,
     WORK = 698,
     WRAPPER = 699,
     WRITE = 700,
     XML_P = 701,
     XMLATTRIBUTES = 702,
     XMLCONCAT = 703,
     XMLELEMENT = 704,
     XMLEXISTS = 705,
     XMLFOREST = 706,
     XMLNAMESPACES = 707,
     XMLPARSE = 708,
     XMLPI = 709,
     XMLROOT = 710,
     XMLSERIALIZE = 711,
     XMLTABLE = 712,
     YEAR_P = 713,
     YES_P = 714,
     ZONE = 715,
     NOT_LA = 716,
     NULLS_LA = 717,
     WITH_LA = 718,
     POSTFIXOP = 719,
     NO_OPCLASS = 720,
     EXPR_LIST = 721,
     UMINUS = 722
   };
#endif
/* Tokens.  */
#define IDENT 258
#define FCONST 259
#define SCONST 260
#define BCONST 261
#define XCONST 262
#define Op 263
#define ICONST 264
#define PARAM 265
#define TYPECAST 266
#define DOT_DOT 267
#define COLON_EQUALS 268
#define EQUALS_GREATER 269
#define LESS_EQUALS 270
#define GREATER_EQUALS 271
#define NOT_EQUALS 272
#define ABORT_P 273
#define ABSOLUTE_P 274
#define ACCESS 275
#define ACTION 276
#define ADD_P 277
#define ADMIN 278
#define AFTER 279
#define AGGREGATE 280
#define ALL 281
#define ALSO 282
#define ALTER 283
#define ALWAYS 284
#define ANALYSE 285
#define ANALYZE 286
#define AND 287
#define ANY 288
#define ARRAY 289
#define AS 290
#define ASC 291
#define ASSERTION 292
#define ASSIGNMENT 293
#define ASYMMETRIC 294
#define AT 295
#define ATTACH 296
#define ATTRIBUTE 297
#define AUTHORIZATION 298
#define BACKWARD 299
#define BEFORE 300
#define BEGIN_P 301
#define BETWEEN 302
#define BIGINT 303
#define BINARY 304
#define BIT 305
#define BOOLEAN_P 306
#define BOTH 307
#define BY 308
#define CACHE 309
#define CALL 310
#define CALLED 311
#define CASCADE 312
#define CASCADED 313
#define CASE 314
#define CAST 315
#define CATALOG_P 316
#define CHAIN 317
#define CHAR_P 318
#define CHARACTER 319
#define CHARACTERISTICS 320
#define CHECK 321
#define CHECKPOINT 322
#define CLASS 323
#define CLOSE 324
#define CLUSTER 325
#define COALESCE 326
#define COLLATE 327
#define COLLATION 328
#define COLUMN 329
#define COLUMNS 330
#define COMMENT 331
#define COMMENTS 332
#define COMMIT 333
#define COMMITTED 334
#define CONCURRENTLY 335
#define CONFIGURATION 336
#define CONFLICT 337
#define CONNECTION 338
#define CONSTRAINT 339
#define CONSTRAINTS 340
#define CONTENT_P 341
#define CONTINUE_P 342
#define CONVERSION_P 343
#define COPY 344
#define COST 345
#define CREATE 346
#define CROSS 347
#define CSV 348
#define CUBE 349
#define CURRENT_P 350
#define CURRENT_CATALOG 351
#define CURRENT_DATE 352
#define CURRENT_ROLE 353
#define CURRENT_SCHEMA 354
#define CURRENT_TIME 355
#define CURRENT_TIMESTAMP 356
#define CURRENT_USER 357
#define CURSOR 358
#define CYCLE 359
#define DATA_P 360
#define DATABASE 361
#define DAY_P 362
#define DEALLOCATE 363
#define DEC 364
#define DECIMAL_P 365
#define DECLARE 366
#define DEFAULT 367
#define DEFAULTS 368
#define DEFERRABLE 369
#define DEFERRED 370
#define DEFINER 371
#define DELETE_P 372
#define DELIMITER 373
#define DELIMITERS 374
#define DEPENDS 375
#define DESC 376
#define DETACH 377
#define DICTIONARY 378
#define DISABLE_P 379
#define DISCARD 380
#define DISTINCT 381
#define DO 382
#define DOCUMENT_P 383
#define DOMAIN_P 384
#define DOUBLE_P 385
#define DROP 386
#define EACH 387
#define ELSE 388
#define ENABLE_P 389
#define ENCODING 390
#define ENCRYPTED 391
#define END_P 392
#define ENUM_P 393
#define ESCAPE 394
#define EVENT 395
#define EXCEPT 396
#define EXCLUDE 397
#define EXCLUDING 398
#define EXCLUSIVE 399
#define EXECUTE 400
#define EXISTS 401
#define EXPLAIN 402
#define EXTENSION 403
#define EXTERNAL 404
#define EXTRACT 405
#define FALSE_P 406
#define FAMILY 407
#define FETCH 408
#define FILTER 409
#define FIRST_P 410
#define FLOAT_P 411
#define FOLLOWING 412
#define FOR 413
#define FORCE 414
#define FOREIGN 415
#define FORWARD 416
#define FREEZE 417
#define FROM 418
#define FULL 419
#define FUNCTION 420
#define FUNCTIONS 421
#define GENERATED 422
#define GLOBAL 423
#define GRANT 424
#define GRANTED 425
#define GREATEST 426
#define GROUP_P 427
#define GROUPING 428
#define GROUPS 429
#define HANDLER 430
#define HASH 431
#define HAVING 432
#define HEADER_P 433
#define HOLD 434
#define HOUR_P 435
#define IDENTITY_P 436
#define IF_P 437
#define ILIKE 438
#define IMMEDIATE 439
#define IMMUTABLE 440
#define IMPLICIT_P 441
#define IMPORT_P 442
#define IN_P 443
#define INCLUDE 444
#define INCLUDING 445
#define INCREMENT 446
#define INDEX 447
#define INDEXES 448
#define INHERIT 449
#define INHERITS 450
#define INITIALLY 451
#define INLINE_P 452
#define INNER_P 453
#define INOUT 454
#define INPUT_P 455
#define INSENSITIVE 456
#define INSERT 457
#define INSTEAD 458
#define INT_P 459
#define INTEGER 460
#define INTERSECT 461
#define INTERVAL 462
#define INTO 463
#define INVOKER 464
#define IS 465
#define ISNULL 466
#define ISOLATION 467
#define JOIN 468
#define KEY 469
#define LABEL 470
#define LANGUAGE 471
#define LARGE_P 472
#define LAST_P 473
#define LATERAL_P 474
#define LEADING 475
#define LEAKPROOF 476
#define LEAST 477
#define LEFT 478
#define LEVEL 479
#define LIKE 480
#define LIMIT 481
#define LISTEN 482
#define LOAD 483
#define LOCAL 484
#define LOCALTIME 485
#define LOCALTIMESTAMP 486
#define LOCATION 487
#define LOCK_P 488
#define LOCKED 489
#define LOGGED 490
#define MAPPING 491
#define MATCH 492
#define MATERIALIZED 493
#define MAXVALUE 494
#define METHOD 495
#define MINUTE_P 496
#define MINVALUE 497
#define MODE 498
#define MONTH_P 499
#define MOVE 500
#define NAME_P 501
#define NAMES 502
#define NATIONAL 503
#define NATURAL 504
#define NCHAR 505
#define NEW 506
#define NEXT 507
#define NO 508
#define NONE 509
#define NOT 510
#define NOTHING 511
#define NOTIFY 512
#define NOTNULL 513
#define NOWAIT 514
#define NULL_P 515
#define NULLIF 516
#define NULLS_P 517
#define NUMERIC 518
#define OBJECT_P 519
#define OF 520
#define OFF 521
#define OFFSET 522
#define OIDS 523
#define OLD 524
#define ON 525
#define ONLY 526
#define OPERATOR 527
#define OPTION 528
#define OPTIONS 529
#define OR 530
#define ORDER 531
#define ORDINALITY 532
#define OTHERS 533
#define OUT_P 534
#define OUTER_P 535
#define OVER 536
#define OVERLAPS 537
#define OVERLAY 538
#define OVERRIDING 539
#define OWNED 540
#define OWNER 541
#define PARALLEL 542
#define PARSER 543
#define PARTIAL 544
#define PARTITION 545
#define PASSING 546
#define PASSWORD 547
#define PLACING 548
#define PLANS 549
#define POLICY 550
#define POSITION 551
#define PRECEDING 552
#define PRECISION 553
#define PRESERVE 554
#define PREPARE 555
#define PREPARED 556
#define PRIMARY 557
#define PRIOR 558
#define PRIVILEGES 559
#define PROCEDURAL 560
#define PROCEDURE 561
#define PROCEDURES 562
#define PROGRAM 563
#define PUBLICATION 564
#define QUOTE 565
#define RANGE 566
#define READ 567
#define REAL 568
#define REASSIGN 569
#define RECHECK 570
#define RECURSIVE 571
#define REF 572
#define REFERENCES 573
#define REFERENCING 574
#define REFRESH 575
#define REINDEX 576
#define RELATIVE_P 577
#define RELEASE 578
#define RENAME 579
#define REPEATABLE 580
#define REPLACE 581
#define REPLICA 582
#define RESET 583
#define RESTART 584
#define RESTRICT 585
#define RETURNING 586
#define RETURNS 587
#define REVOKE 588
#define RIGHT 589
#define ROLE 590
#define ROLLBACK 591
#define ROLLUP 592
#define ROUTINE 593
#define ROUTINES 594
#define ROW 595
#define ROWS 596
#define RULE 597
#define SAVEPOINT 598
#define SCHEMA 599
#define SCHEMAS 600
#define SCROLL 601
#define SEARCH 602
#define SECOND_P 603
#define SECURITY 604
#define SELECT 605
#define SEQUENCE 606
#define SEQUENCES 607
#define SERIALIZABLE 608
#define SERVER 609
#define SESSION 610
#define SESSION_USER 611
#define SET 612
#define SETS 613
#define SETOF 614
#define SHARE 615
#define SHOW 616
#define SIMILAR 617
#define SIMPLE 618
#define SKIP 619
#define SMALLINT 620
#define SNAPSHOT 621
#define SOME 622
#define SPLIT 623
#define SQL_P 624
#define STABLE 625
#define STANDALONE_P 626
#define START 627
#define STATEMENT 628
#define STATISTICS 629
#define STDIN 630
#define STDOUT 631
#define STORAGE 632
#define STRICT_P 633
#define STRIP_P 634
#define SUBSCRIPTION 635
#define SUBSTRING 636
#define SYMMETRIC 637
#define SYSID 638
#define SYSTEM_P 639
#define TABLE 640
#define TABLES 641
#define TABLESAMPLE 642
#define TABLESPACE 643
#define TABLETS 644
#define TEMP 645
#define TEMPLATE 646
#define TEMPORARY 647
#define TEXT_P 648
#define THEN 649
#define TIES 650
#define TIME 651
#define TIMESTAMP 652
#define TO 653
#define TRAILING 654
#define TRANSACTION 655
#define TRANSFORM 656
#define TREAT 657
#define TRIGGER 658
#define TRIM 659
#define TRUE_P 660
#define TRUNCATE 661
#define TRUSTED 662
#define TYPE_P 663
#define TYPES_P 664
#define UNBOUNDED 665
#define UNCOMMITTED 666
#define UNENCRYPTED 667
#define UNION 668
#define UNIQUE 669
#define UNKNOWN 670
#define UNLISTEN 671
#define UNLOGGED 672
#define UNTIL 673
#define UPDATE 674
#define USER 675
#define USING 676
#define VACUUM 677
#define VALID 678
#define VALIDATE 679
#define VALIDATOR 680
#define VALUE_P 681
#define VALUES 682
#define VARCHAR 683
#define VARIADIC 684
#define VARYING 685
#define VERBOSE 686
#define VERSION_P 687
#define VIEW 688
#define VIEWS 689
#define VOLATILE 690
#define WHEN 691
#define WHERE 692
#define WHITESPACE_P 693
#define WINDOW 694
#define WITH 695
#define WITHIN 696
#define WITHOUT 697
#define WORK 698
#define WRAPPER 699
#define WRITE 700
#define XML_P 701
#define XMLATTRIBUTES 702
#define XMLCONCAT 703
#define XMLELEMENT 704
#define XMLEXISTS 705
#define XMLFOREST 706
#define XMLNAMESPACES 707
#define XMLPARSE 708
#define XMLPI 709
#define XMLROOT 710
#define XMLSERIALIZE 711
#define XMLTABLE 712
#define YEAR_P 713
#define YES_P 714
#define ZONE 715
#define NOT_LA 716
#define NULLS_LA 717
#define WITH_LA 718
#define POSTFIXOP 719
#define NO_OPCLASS 720
#define EXPR_LIST 721
#define UMINUS 722




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 232 "gram.y"
{
	core_YYSTYPE		core_yystype;
	/* these fields must match core_YYSTYPE: */
	int					ival;
	char				*str;
	const char			*keyword;

	char				chr;
	bool				boolean;
	JoinType			jtype;
	DropBehavior		dbehavior;
	OnCommitAction		oncommit;
	List				*list;
	Node				*node;
	Value				*value;
	ObjectType			objtype;
	TypeName			*typnam;
	FunctionParameter   *fun_param;
	FunctionParameterMode fun_param_mode;
	ObjectWithArgs		*objwithargs;
	DefElem				*defelt;
	SortBy				*sortby;
	WindowDef			*windef;
	JoinExpr			*jexpr;
	IndexElem			*ielem;
	Alias				*alias;
	RangeVar			*range;
	IntoClause			*into;
	WithClause			*with;
	InferClause			*infer;
	OnConflictClause	*onconflict;
	A_Indices			*aind;
	ResTarget			*target;
	struct PrivTarget	*privtarget;
	AccessPriv			*accesspriv;
	struct ImportQual	*importqual;
	InsertStmt			*istmt;
	VariableSetStmt		*vsetstmt;
	PartitionElem		*partelem;
	PartitionSpec		*partspec;
	PartitionBoundSpec	*partboundspec;
	RoleSpec			*rolespec;
	OptSplit			*splitopt;
}
/* Line 1529 of yacc.c.  */
#line 1028 "gram.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} YYLTYPE;
# define yyltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


