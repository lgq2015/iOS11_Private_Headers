/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXResultRecord : NSObject <NSCopying>

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)curate;
- (id)curatedFetchResult;
- (id)curatedOids;
- (id)description;
- (id)excludedOids;
- (id)exposedFetchResult;
- (id)fetchResult;
- (id)filteredFetchResult;
- (id)includedOids;
- (id)inclusionPredicate;
- (id)keyAssetsFetchResult;
- (bool)reverseSortOrder;

@end
