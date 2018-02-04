/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGParsedName : NSObject {
    NSMutableSet * _components;
    SGIdentityName * _identity;
    NSString * _name;
    NSSet * _nicknames;
}

+ (id)instanceWithName:(id)arg1;

- (void).cxx_destruct;
- (id)components;
- (id)initWithName:(id)arg1;
- (id)nicknames;

@end
