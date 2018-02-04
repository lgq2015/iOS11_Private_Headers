/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

@interface WLKLookupBasedInstallable : NSObject <WLKInstallable> {
    SSLookupItem * _item;
}

@property (nonatomic, readonly, copy) NSArray *appAdamIDs;
@property (nonatomic, readonly, copy) NSArray *appBundleIDs;
@property (nonatomic, readonly, copy) NSURL *appStoreURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SSLookupItem *item;
@property (nonatomic, readonly, copy) NSString *name;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)appAdamIDs;
- (id)appBundleIDs;
- (id)appIconURLForSize:(struct CGSize { double x1; double x2; })arg1;
- (id)appStoreURL;
- (id)init;
- (id)initWithLookupItem:(id)arg1;
- (id)item;
- (id)name;

@end
