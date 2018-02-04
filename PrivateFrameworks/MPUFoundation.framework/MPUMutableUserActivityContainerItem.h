/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

@interface MPUMutableUserActivityContainerItem : MPUUserActivityContainerItem

@property (nonatomic) long long containerItemType;
@property (nonatomic, retain) MPMediaEntity *selectedMediaEntity;
@property (nonatomic, retain) MPMediaEntity *visualReferenceMediaEntity;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setContainerItemType:(long long)arg1;
- (void)setSelectedMediaEntity:(id)arg1;
- (void)setVisualReferenceMediaEntity:(id)arg1;

@end
