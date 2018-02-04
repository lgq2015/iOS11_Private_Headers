/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
 */

@interface CertInfoTrustDetailsView : UIView {
    NSArray * _certificateViews;
    CertInfoCertificateDetailsView * _currentCertView;
}

- (void).cxx_destruct;
- (void)_appendRemainingCertificates;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 trustProperties:(id)arg2;
- (void)layoutSubviews;

@end
