/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
 */

@interface MCPayloadSection : NSObject {
    NSMutableArray * _payloadInfos;
    NSString * _sectionFooter;
    NSString * _sectionTitle;
}

@property (nonatomic, retain) NSMutableArray *payloadInfos;
@property (nonatomic, retain) NSString *sectionFooter;
@property (nonatomic, retain) NSString *sectionTitle;

- (void).cxx_destruct;
- (id)init;
- (id)initWithSectionTitle:(id)arg1 footer:(id)arg2 payloadInfos:(id)arg3;
- (id)payloadInfos;
- (id)sectionFooter;
- (id)sectionTitle;
- (void)setPayloadInfos:(id)arg1;
- (void)setSectionFooter:(id)arg1;
- (void)setSectionTitle:(id)arg1;

@end
