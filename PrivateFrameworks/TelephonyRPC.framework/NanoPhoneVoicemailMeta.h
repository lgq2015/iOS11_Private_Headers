/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TelephonyRPC.framework/TelephonyRPC
 */

@interface NanoPhoneVoicemailMeta : PBCodable <NSCopying, SYObject> {
    NSString * _callbackNumber;
    NSString * _dataPath;
    double  _date;
    int  _duration;
    int  _flags;
    struct { 
        unsigned int date : 1; 
        unsigned int identifier : 1; 
        unsigned int remoteUID : 1; 
        unsigned int duration : 1; 
        unsigned int flags : 1; 
    }  _has;
    long long  _identifier;
    long long  _remoteUID;
    NSString * _sender;
    NanoPhoneVoicemailBody * _voicemailBody;
    long long  _voicemailNumber;
    NanoPhoneVoicemailTranscript * _voicemailTranscript;
}

@property (nonatomic, retain) NSString *callbackNumber;
@property (nonatomic, retain) NSString *dataPath;
@property (nonatomic) double date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int duration;
@property (nonatomic) int flags;
@property (nonatomic, readonly) bool hasCallbackNumber;
@property (nonatomic, readonly) bool hasDataPath;
@property (nonatomic) bool hasDate;
@property (nonatomic) bool hasDuration;
@property (nonatomic) bool hasFlags;
@property (nonatomic) bool hasIdentifier;
@property (nonatomic) bool hasRemoteUID;
@property (nonatomic, readonly) bool hasSender;
@property (nonatomic, readonly) bool hasVoicemailBody;
@property (nonatomic, readonly) bool hasVoicemailTranscript;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long identifier;
@property (nonatomic) long long remoteUID;
@property (nonatomic, retain) NSString *sender;
@property (readonly) Class superclass;
@property (nonatomic, retain) NanoPhoneVoicemailBody *voicemailBody;
@property (nonatomic) long long voicemailNumber;
@property (nonatomic, retain) NanoPhoneVoicemailTranscript *voicemailTranscript;

+ (id)voicemailWithMessage:(id)arg1;
+ (id)voicemailWithSYContext:(id)arg1;
+ (id)xpcObjectAsArray:(id)arg1;

- (void).cxx_destruct;
- (id)asXpcObject;
- (void)attachToXpcObject:(id)arg1;
- (id)callbackNumber;
- (id)callbackNumberOrSender;
- (id)contextWithSyncOperation:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataPath;
- (double)date;
- (id)description;
- (id)dictionaryRepresentation;
- (id)dictionaryRepresentation;
- (void)displayLabelFromAddressBook:(void*)arg1 withUpdateBlock:(id /* block */)arg2;
- (id)displayNameFromAddressBook:(void*)arg1;
- (int)duration;
- (int)flags;
- (bool)hasCallbackNumber;
- (bool)hasDataPath;
- (bool)hasDate;
- (bool)hasDuration;
- (bool)hasFlags;
- (bool)hasIdentifier;
- (bool)hasRemoteUID;
- (bool)hasSender;
- (bool)hasVoicemailBody;
- (bool)hasVoicemailTranscript;
- (unsigned long long)hash;
- (long long)identifier;
- (id)initWithVoicemail:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)loadVoicemailBodyIfNeeded;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (long long)remoteUID;
- (id)sender;
- (void)setCallbackNumber:(id)arg1;
- (void)setDataPath:(id)arg1;
- (void)setDate:(double)arg1;
- (void)setDuration:(int)arg1;
- (void)setFlags:(int)arg1;
- (void)setHasDate:(bool)arg1;
- (void)setHasDuration:(bool)arg1;
- (void)setHasFlags:(bool)arg1;
- (void)setHasIdentifier:(bool)arg1;
- (void)setHasRemoteUID:(bool)arg1;
- (void)setIdentifier:(long long)arg1;
- (void)setRemoteUID:(long long)arg1;
- (void)setSender:(id)arg1;
- (void)setVoicemailBody:(id)arg1;
- (void)setVoicemailNumber:(long long)arg1;
- (void)setVoicemailTranscript:(id)arg1;
- (id)syncId;
- (int)syncOperation;
- (id)voicemailBody;
- (id)voicemailDescription;
- (long long)voicemailNumber;
- (id)voicemailTranscript;
- (void)writeTo:(id)arg1;

@end
