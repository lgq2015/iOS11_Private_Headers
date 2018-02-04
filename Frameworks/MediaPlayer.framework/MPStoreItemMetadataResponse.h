/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStoreItemMetadataResponse : NSObject <NSCopying> {
    bool  _finalResponse;
    NSMutableDictionary * _itemIdentifierToStoreItemMetadata;
}

@property (nonatomic, readonly, copy) NSDate *earliestExpirationDate;
@property (getter=isExpired, nonatomic, readonly) bool expired;
@property (getter=isFinalResponse, nonatomic) bool finalResponse;
@property (nonatomic, readonly, copy) NSArray *itemIdentifiers;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)earliestExpirationDate;
- (bool)isExpired;
- (bool)isFinalResponse;
- (id)itemIdentifiers;
- (void)setFinalResponse:(bool)arg1;
- (void)setStoreItemMetadata:(id)arg1 forItemIdentifier:(id)arg2;
- (id)storeItemMetadataForItemIdentifier:(id)arg1;
- (id)storeItemMetadataForItemIdentifier:(id)arg1 returningIsFinalMetadata:(bool*)arg2;

@end
