/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGCuratedEventKey : NSObject <SGEntityKey> {
    NSString * _externalId;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *externalId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)isSupportedEntityType:(long long)arg1;

- (void).cxx_destruct;
- (id)description;
- (id)externalId;
- (unsigned long long)hash;
- (id)initWithExternalId:(id)arg1;
- (id)initWithSerialized:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCuratedEventKey:(id)arg1;
- (id)serialize;

@end
