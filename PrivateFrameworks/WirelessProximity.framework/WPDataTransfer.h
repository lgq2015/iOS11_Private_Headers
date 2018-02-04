/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
 */

@interface WPDataTransfer : NSObject {
    unsigned short  _currentDataSize;
    NSMutableData * _currentReceivedData;
    NSUUID * _peerUUID;
    bool  _receivedFirstPacket;
}

@property (nonatomic) unsigned short currentDataSize;
@property (nonatomic, retain) NSMutableData *currentReceivedData;
@property (nonatomic, retain) NSUUID *peerUUID;
@property (nonatomic) bool receivedFirstPacket;

- (void).cxx_destruct;
- (bool)addNewData:(id)arg1;
- (unsigned short)currentDataSize;
- (id)currentReceivedData;
- (id)initDataTransferForPeer:(id)arg1;
- (id)peerUUID;
- (bool)receivedFirstPacket;
- (void)resetTransfer;
- (void)setCurrentDataSize:(unsigned short)arg1;
- (void)setCurrentReceivedData:(id)arg1;
- (void)setPeerUUID:(id)arg1;
- (void)setReceivedFirstPacket:(bool)arg1;

@end
