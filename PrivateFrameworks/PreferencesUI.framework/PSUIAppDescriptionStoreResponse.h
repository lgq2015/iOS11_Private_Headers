/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface PSUIAppDescriptionStoreResponse : NSObject {
    NSURL * _iconURL;
    NSURL * _installURL;
    PSUIAppDescription * _partialAppDescription;
}

@property (nonatomic, retain) NSURL *iconURL;
@property (nonatomic, retain) NSURL *installURL;
@property (nonatomic, retain) PSUIAppDescription *partialAppDescription;

- (void).cxx_destruct;
- (id)iconURL;
- (id)installURL;
- (id)partialAppDescription;
- (void)setIconURL:(id)arg1;
- (void)setInstallURL:(id)arg1;
- (void)setPartialAppDescription:(id)arg1;

@end
