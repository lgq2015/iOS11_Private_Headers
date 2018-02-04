/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DiagnosticsSupport.framework/DiagnosticsSupport
 */

@interface DSLogLine : NSObject {
    NSString * _bundleID;
    NSDate * _date;
    NSString * _exception;
    NSArray * _fields;
    bool  _isUsable;
    NSString * _type;
}

@property (nonatomic, readonly) NSString *bundleID;
@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) NSString *exception;
@property (nonatomic, readonly) NSArray *fields;
@property (nonatomic, readonly) bool isUsable;
@property (nonatomic, retain) NSString *type;

+ (id)logLinesFromArray:(id)arg1;

- (void).cxx_destruct;
- (id)blankingStringFromFieldAtIndex:(int)arg1;
- (bool)boolFromFieldAtIndex:(int)arg1;
- (id)bundleID;
- (id)date;
- (double)doubleFromFieldAtIndex:(int)arg1;
- (id)exception;
- (id)fields;
- (id)initWithLine:(id)arg1;
- (id)initWithLogLine:(id)arg1;
- (int)integerFromFieldAtIndex:(int)arg1;
- (bool)isUsable;
- (long long)longLongFromFieldAtIndex:(int)arg1;
- (id)nilableStringFromFieldAtIndex:(int)arg1;
- (void)setType:(id)arg1;
- (id)type;

@end
