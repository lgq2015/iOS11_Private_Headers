/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

@interface NRDataCollector : NSObject {
    NSMutableDictionary * _data;
}

@property (nonatomic, retain) NSMutableDictionary *data;

+ (id)createSharedInstance;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)data;
- (id)getValueForKey:(id)arg1;
- (id)incrementCounterForKey:(id)arg1;
- (void)reset;
- (void)setData:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;

@end
