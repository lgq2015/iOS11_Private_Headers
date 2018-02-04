/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCDumpContext : NSObject {
    PQLConnection * _db;
    bool  _dumpTrackedPendingDownloads;
    BRCDumper * _dumper;
    struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; } * _fp;
    long long  _indentation;
    NSString * _indentationBaseString;
    bool  _liveDaemon;
    NSDate * _nowDate;
    bool  _onlyActiveStuff;
    brc_task_tracker * _taskTracker;
}

@property (nonatomic, readonly) PQLConnection *db;
@property (nonatomic) bool dumpTrackedPendingDownloads;
@property (nonatomic, readonly) struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*fp;
@property (nonatomic, retain) NSString *indentationBaseString;
@property (nonatomic, readonly) bool isCancelled;
@property (nonatomic) bool liveDaemon;
@property (nonatomic) bool onlyActiveStuff;
@property (nonatomic, retain) brc_task_tracker *taskTracker;

+ (id)highlightedString:(id)arg1 type:(long long)arg2 context:(id)arg3;
+ (id)nowDateFromContext:(id)arg1;
+ (long long)nowFromContext:(id)arg1;
+ (id)stringFromByteCount:(long long)arg1 context:(id)arg2;
+ (id)stringFromByteCount:(long long)arg1 showActualByteCount:(bool)arg2 suffix:(id)arg3 context:(id)arg4;
+ (id)stringFromCount:(long long)arg1 context:(id)arg2;
+ (id)stringFromCount:(long long)arg1 showActualCount:(bool)arg2 suffix:(id)arg3 isByteCount:(bool)arg4 context:(id)arg5;
+ (id)stringFromDueDate:(id)arg1 allowsPast:(bool)arg2 context:(id)arg3;
+ (id)stringFromDueStamp:(long long)arg1 allowsPast:(bool)arg2 context:(id)arg3;
+ (id)stringFromError:(id)arg1 context:(id)arg2;
+ (id)stringFromErrorString:(id)arg1 context:(id)arg2;
+ (id)stringFromInterval:(double)arg1 context:(id)arg2;
+ (id)stringFromItemAsString:(id)arg1 context:(id)arg2;
+ (id)stringFromItemID:(id)arg1 context:(id)arg2;
+ (id)stringFromOperationUUID:(unsigned char)arg1 context:(id)arg2;
+ (id)stringFromThrottleState:(int)arg1 context:(id)arg2;

- (void).cxx_destruct;
- (id)db;
- (bool)dumpTrackedPendingDownloads;
- (struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)fp;
- (id)highlightedString:(id)arg1 type:(long long)arg2;
- (id)indentationBaseString;
- (id)initWithDumper:(id)arg1;
- (id)initWithFile:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg1 db:(id)arg2;
- (bool)isCancelled;
- (bool)liveDaemon;
- (bool)onlyActiveStuff;
- (void)popIndentation;
- (void)pushIndentation;
- (void)setDumpTrackedPendingDownloads:(bool)arg1;
- (void)setIndentationBaseString:(id)arg1;
- (void)setLiveDaemon:(bool)arg1;
- (void)setOnlyActiveStuff:(bool)arg1;
- (void)setTaskTracker:(id)arg1;
- (id)taskTracker;
- (void)writeLineWithFormat:(id)arg1;

@end
