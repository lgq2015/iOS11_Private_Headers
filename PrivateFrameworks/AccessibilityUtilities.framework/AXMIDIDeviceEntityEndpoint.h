/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXMIDIDeviceEntityEndpoint : NSObject {
    AXMIDIDeviceEntity * _entity;
    unsigned int  _midiEndpoint;
}

@property (nonatomic, readonly) NSString *driverName;
@property (nonatomic) AXMIDIDeviceEntity *entity;
@property (nonatomic, readonly) NSNumber *isBroadcast;
@property (nonatomic, readonly) NSNumber *isEmbedded;
@property (nonatomic, readonly) NSNumber *isOffline;
@property (nonatomic, readonly) NSNumber *isPrivate;
@property (nonatomic, readonly) NSString *manufacturer;
@property (nonatomic) unsigned int midiEndpoint;
@property (nonatomic, readonly) NSString *model;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSNumber *receiveChannels;
@property (nonatomic, readonly) NSNumber *transmitChannels;
@property (nonatomic, readonly) NSNumber *uniqueID;

- (void).cxx_destruct;
- (id)description;
- (id)driverName;
- (id)entity;
- (id)initWithMIDIEndpoint:(unsigned int)arg1 entity:(id)arg2;
- (id)isBroadcast;
- (id)isEmbedded;
- (id)isOffline;
- (id)isPrivate;
- (id)manufacturer;
- (unsigned int)midiEndpoint;
- (id)model;
- (id)name;
- (id)receiveChannels;
- (void)setEntity:(id)arg1;
- (void)setMidiEndpoint:(unsigned int)arg1;
- (id)transmitChannels;
- (id)uniqueID;

@end
