/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
 */

@interface _WGCAPackageView : _UICAPackageView {
    NSURL * _archiveURL;
}

@property (nonatomic, copy) NSURL *archiveURL;
@property (nonatomic, readonly, copy) NSString *snapshotIdentifier;

+ (void)loadPackageViewWithContentsOfURL:(id)arg1 publishedObjectViewClassMap:(id)arg2 completion:(id /* block */)arg3;

- (void).cxx_destruct;
- (void)_setContinuousCornerRadius:(double)arg1;
- (bool)_supportsPushingBottomCornerRadiusToSubviews:(double)arg1;
- (id)archiveURL;
- (id)description;
- (void)setArchiveURL:(id)arg1;
- (id)snapshotIdentifier;

@end
