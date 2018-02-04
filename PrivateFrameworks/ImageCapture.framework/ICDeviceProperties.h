/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface ICDeviceProperties : NSObject {
    NSString * _UUIDString;
    bool  _autoOpenSession;
    bool  _closeSessionPending;
    id  _delegate;
    DeviceManager * _deviceManager;
    bool  _hasOpenSession;
    struct CGImage { } * _icon;
    NSString * _name;
    bool  _openSessionPending;
    NSString * _productKind;
    NSString * _transportType;
    int  _usbLocationID;
    int  _usbProductID;
    int  _usbVendorID;
}

@property (retain) NSString *UUIDString;
@property bool autoOpenSession;
@property bool closeSessionPending;
@property id delegate;
@property DeviceManager *deviceManager;
@property bool hasOpenSession;
@property struct CGImage { }*icon;
@property (retain) NSString *name;
@property bool openSessionPending;
@property (retain) NSString *productKind;
@property (retain) NSString *transportType;
@property int usbLocationID;
@property int usbProductID;
@property int usbVendorID;

- (id)UUIDString;
- (bool)autoOpenSession;
- (bool)closeSessionPending;
- (void)dealloc;
- (id)delegate;
- (id)deviceManager;
- (void)finalize;
- (bool)hasOpenSession;
- (struct CGImage { }*)icon;
- (id)name;
- (bool)openSessionPending;
- (id)productKind;
- (void)setAutoOpenSession:(bool)arg1;
- (void)setCloseSessionPending:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDeviceManager:(id)arg1;
- (void)setHasOpenSession:(bool)arg1;
- (void)setIcon:(struct CGImage { }*)arg1;
- (void)setName:(id)arg1;
- (void)setOpenSessionPending:(bool)arg1;
- (void)setProductKind:(id)arg1;
- (void)setTransportType:(id)arg1;
- (void)setUUIDString:(id)arg1;
- (void)setUsbLocationID:(int)arg1;
- (void)setUsbProductID:(int)arg1;
- (void)setUsbVendorID:(int)arg1;
- (id)transportType;
- (int)usbLocationID;
- (int)usbProductID;
- (int)usbVendorID;

@end
