/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKClassSession : CRKSession <CATRemoteConnectionDelegate> {
    unsigned short  _flags;
    DMFControlSessionIdentifier * _identifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned short flags;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) DMFControlSessionIdentifier *identifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned short)flags;
- (void)foundBeaconWithFlags:(unsigned short)arg1;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1;
- (void)lostBeacon;
- (void)setFlags:(unsigned short)arg1;

@end
