/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFMyriadRecord : NSObject {
    unsigned char  _deviceClass;
    unsigned char  _deviceGroup;
    NSUUID * _deviceID;
    unsigned char  _goodness;
    bool  _isMe;
    unsigned short  _pHash;
    unsigned char  _tieBreaker;
    unsigned char  _userConfidence;
}

@property (nonatomic) unsigned char deviceClass;
@property (nonatomic) unsigned char deviceGroup;
@property (nonatomic, retain) NSUUID *deviceID;
@property (nonatomic) unsigned char goodness;
@property (nonatomic) bool isMe;
@property (nonatomic) unsigned short pHash;
@property (nonatomic) unsigned char tieBreaker;
@property (nonatomic) unsigned char userConfidence;

- (void).cxx_destruct;
- (void)adjustByMultiplier:(float)arg1 adding:(int)arg2;
- (id)asAdvertisementData;
- (id)description;
- (unsigned char)deviceClass;
- (unsigned char)deviceGroup;
- (id)deviceID;
- (void)generateTiebreaker;
- (unsigned char)goodness;
- (id)init;
- (id)initWithAudioData:(id)arg1;
- (id)initWithDeviceID:(id)arg1 data:(id)arg2;
- (bool)isAContinuation;
- (bool)isATrump;
- (bool)isAnEmergency;
- (bool)isAnEmergencyHandled;
- (bool)isMe;
- (unsigned short)pHash;
- (void)setDeviceClass:(unsigned char)arg1;
- (void)setDeviceGroup:(unsigned char)arg1;
- (void)setDeviceID:(id)arg1;
- (void)setGoodness:(unsigned char)arg1;
- (void)setIsMe:(bool)arg1;
- (void)setPHash:(unsigned short)arg1;
- (void)setTieBreaker:(unsigned char)arg1;
- (void)setUserConfidence:(unsigned char)arg1;
- (unsigned char)tieBreaker;
- (unsigned char)userConfidence;

@end
