/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iCloudQuotaUI.framework/iCloudQuotaUI
 */

@interface ICQViewController : UIViewController <ICQPageDelegate> {
    <ICQPageDelegate> * _delegate;
    _ICQPageSpecification * _pageSpecification;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ICQPageDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) _ICQPageSpecification *pageSpecification;
@property (readonly) Class superclass;

+ (bool)supportsPageClassIdentifier:(id)arg1;
+ (Class)viewControllerClassForPageClassIdentifier:(id)arg1;

- (void).cxx_destruct;
- (id)delegate;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithPageSpecification:(id)arg1;
- (id)pageSpecification;
- (void)sender:(id)arg1 action:(long long)arg2 parameters:(id)arg3;
- (double)senderGetTopMargin:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
