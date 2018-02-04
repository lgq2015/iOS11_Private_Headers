/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
 */

@interface _DECFilterManager : NSObject <_DECFilter> {
    NSArray * _filters;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_createFilters;
- (bool)acceptPredictionItem:(id)arg1 forConsumer:(unsigned long long)arg2;
- (id)init;

@end
