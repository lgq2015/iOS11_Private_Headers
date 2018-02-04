/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProactiveExperts.framework/ProactiveExperts
 */

@interface PEXLabelMatcher : NSObject {
    struct NSDictionary { Class x1; } * _map;
}

@property (nonatomic, readonly) NSDictionary *map;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (struct NSDictionary { Class x1; }*)_generateMap;
- (id)init;
- (struct NSDictionary { Class x1; }*)map;
- (unsigned long long)matchFromLabel:(id)arg1 toLabel:(id)arg2;

@end
