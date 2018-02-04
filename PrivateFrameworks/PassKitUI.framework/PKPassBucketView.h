/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPassBucketView : UIView {
    long long  _background;
    NSArray * _bucket;
    PKPassBucketTemplate * _bucketTemplate;
    PKPassColorProfile * _colorProfile;
    NSMutableArray * _fieldViews;
    PKPass * _pass;
}

@property (nonatomic, retain) NSArray *bucket;
@property (nonatomic, retain) PKPassBucketTemplate *bucketTemplate;
@property (nonatomic, retain) PKPassColorProfile *colorProfile;
@property (nonatomic, retain) PKPass *pass;

- (void).cxx_destruct;
- (long long)_backgroundForBucketTemplate:(id)arg1;
- (id)_fieldViewsByWidth;
- (void)_measureAndFitEvenlySizedSubviews;
- (void)_measureAndFitVariablySizedSubviews;
- (void)_presentRecursiveDiff:(id)arg1 inView:(id)arg2 forSubviewAtIndex:(unsigned long long)arg3 withSubviews:(id)arg4 completion:(id /* block */)arg5;
- (void)_updateSubviews;
- (id)bucket;
- (id)bucketTemplate;
- (id)colorProfile;
- (void)dealloc;
- (id)description;
- (void)layoutSubviews;
- (id)pass;
- (void)presentDiff:(id)arg1 inView:(id)arg2 completion:(id /* block */)arg3;
- (void)setBucket:(id)arg1;
- (void)setBucketTemplate:(id)arg1;
- (void)setColorProfile:(id)arg1;
- (void)setPass:(id)arg1;

@end
