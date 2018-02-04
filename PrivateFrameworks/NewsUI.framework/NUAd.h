/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUAd : NSObject <NUAdContextProvider> {
    NUAdBannerView * _bannerView;
    NSDate * _creationDate;
    NSString * _identifier;
    NSDate * _loadDate;
    NSString * _opportunityIdentifier;
    unsigned long long  _state;
    NSDate * _unloadDate;
}

@property (nonatomic, retain) NUAdBannerView *bannerView;
@property (nonatomic, readonly) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) NSDate *loadDate;
@property (nonatomic, readonly) NSString *opportunityIdentifier;
@property (nonatomic) unsigned long long state;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSDate *unloadDate;

- (void).cxx_destruct;
- (id)adContextValueForKeyPath:(id)arg1;
- (id)bannerView;
- (id)creationDate;
- (id)identifier;
- (id)initWithBanner:(id)arg1 identifier:(id)arg2;
- (id)loadDate;
- (id)opportunityIdentifier;
- (void)setBannerView:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLoadDate:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)setUnloadDate:(id)arg1;
- (unsigned long long)state;
- (id)unloadDate;

@end
