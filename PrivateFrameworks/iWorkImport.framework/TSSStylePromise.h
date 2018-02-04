/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSSStylePromise : NSObject <TSSStyleObject> {
    NSMutableArray * _promisees;
    TSSStyle * _sourceStyle;
}

+ (id)promiseForStyle:(id)arg1;

- (void)addPromisee:(id)arg1;
- (void)dealloc;
- (void)fulfillWithStyle:(id)arg1;
- (id)initWithStyle:(id)arg1;

@end
