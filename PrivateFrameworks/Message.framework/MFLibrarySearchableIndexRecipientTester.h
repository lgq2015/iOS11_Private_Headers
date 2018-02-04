/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFLibrarySearchableIndexRecipientTester : NSObject <MFLibrarySearchableIndexTesting>

@property (nonatomic, readonly) MFLibrarySearchableIndexQueryContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)context;
- (id)spotlightQueryFromDataSamples:(id)arg1;
- (id)transformDataForVerification:(id)arg1;
- (bool)verifySearchableItem:(id)arg1 againstExpectedData:(id)arg2;

@end
