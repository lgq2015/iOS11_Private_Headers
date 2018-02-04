/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _CDStatsPrinter : NSObject {
    unsigned long long  _indent;
    NSMutableString * _s;
}

- (void).cxx_destruct;
- (void)appendDescription:(id)arg1;
- (void)appendDescription:(id)arg1 boolValue:(bool)arg2;
- (void)appendDescription:(id)arg1 dateValue:(id)arg2;
- (void)appendDescription:(id)arg1 dateWithTimeIntervalValue:(double)arg2;
- (void)appendDescription:(id)arg1 elapsedTimeIntervalValue:(double)arg2;
- (void)appendDescription:(id)arg1 enabledValue:(bool)arg2;
- (void)appendDescription:(id)arg1 intValue:(int)arg2;
- (void)appendDescription:(id)arg1 integerValue:(long long)arg2;
- (void)appendDescription:(id)arg1 longLongValue:(long long)arg2;
- (void)appendDescription:(id)arg1 stringValue:(id)arg2;
- (void)appendDescription:(id)arg1 successRateWithSuccessCount:(unsigned long long)arg2 failureCount:(unsigned long long)arg3;
- (void)appendDescription:(id)arg1 unsignedIntegerValue:(unsigned long long)arg2;
- (void)appendDescription:(id)arg1 unsignedLongLongValue:(unsigned long long)arg2;
- (void)appendDescription:(id)arg1 unsignedShortValue:(unsigned short)arg2;
- (void)appendLine:(id)arg1;
- (void)appendStringValue:(id)arg1;
- (id)description;
- (id)init;
- (id)lineWithDescription:(id)arg1;
- (id)lineWithDescription:(id)arg1 tab:(bool)arg2;
- (void)popIndent;
- (void)pushIndent;

@end
