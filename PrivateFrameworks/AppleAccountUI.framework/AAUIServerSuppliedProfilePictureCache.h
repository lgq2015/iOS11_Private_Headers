/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@interface AAUIServerSuppliedProfilePictureCache : NSObject {
    NSMutableDictionary * _personIDToEntryMap;
    double  _pictureDiameter;
}

@property (nonatomic, readonly) double pictureDiameter;

+ (id)sharedCache;

- (void).cxx_destruct;
- (void)_ensureMinimumPictureDiameter_mustBeSynchronized:(double)arg1;
- (id)init;
- (double)pictureDiameter;
- (void)profilePictureForPersonID:(id)arg1 diameter:(double)arg2 completion:(id /* block */)arg3;
- (id)profilePictureForPersonID:(id)arg1 diameter:(double)arg2 serverFetchBlock:(id /* block */)arg3;
- (bool)updateProfilePicture:(id)arg1 didReceiveNewPicture:(bool)arg2 serverCacheTag:(id)arg3 forPersonID:(id)arg4;

@end
