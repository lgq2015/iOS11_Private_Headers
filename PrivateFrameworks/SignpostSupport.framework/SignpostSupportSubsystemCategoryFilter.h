/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
 */

@interface SignpostSupportSubsystemCategoryFilter : NSObject {
    NSMutableDictionary * _subsystemsDict;
}

@property (nonatomic, readonly) NSMutableDictionary *subsystemsDict;

- (void).cxx_destruct;
- (id)_initWithEntries:(id)arg1;
- (void)addEntry:(id)arg1;
- (void)addSubsystem:(id)arg1 category:(id)arg2;
- (bool)matchesSubsystem:(id)arg1 category:(id)arg2;
- (bool)passesSubsystem:(id)arg1 category:(id)arg2;
- (id)subsystemsDict;

@end
