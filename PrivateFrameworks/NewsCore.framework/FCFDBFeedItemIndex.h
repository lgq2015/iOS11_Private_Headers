/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCFDBFeedItemIndex : NSManagedObject

@property (nonatomic) unsigned long long feature;
@property (nonatomic, retain) FCFDBFeedItem *feedItem;
@property (nonatomic) NSNumber *feedLookupID;
@property (nonatomic) unsigned long long order;

@end
