/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

@interface CUMobileDevice : NSObject <NSCopying> {
    bool  _connected;
    NSUUID * _identifier;
    NSString * _internalModel;
    NSString * _name;
    bool  _paired;
    bool  _placeholder;
    NSString * _udid;
    NSString * _wifiAddress;
}

@property (nonatomic) bool connected;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic, copy) NSString *internalModel;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) bool paired;
@property (nonatomic) bool placeholder;
@property (nonatomic, copy) NSString *udid;
@property (nonatomic, copy) NSString *wifiAddress;

- (void).cxx_destruct;
- (bool)connected;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)identifier;
- (id)internalModel;
- (id)name;
- (bool)paired;
- (bool)placeholder;
- (void)setConnected:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setInternalModel:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPaired:(bool)arg1;
- (void)setPlaceholder:(bool)arg1;
- (void)setUdid:(id)arg1;
- (void)setWifiAddress:(id)arg1;
- (id)udid;
- (id)wifiAddress;

@end
