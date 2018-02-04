/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudCommentsChangeNotification : PLContainerChangeNotification {
    NSDictionary * _userInfo;
}

@property (nonatomic, readonly, retain) PLManagedAsset *asset;

+ (id)notificationWithAsset:(id)arg1 snapshot:(id)arg2;

- (id)_contentRelationshipName;
- (id)asset;
- (void)dealloc;
- (id)description;
- (id)name;
- (id)userInfo;

@end
