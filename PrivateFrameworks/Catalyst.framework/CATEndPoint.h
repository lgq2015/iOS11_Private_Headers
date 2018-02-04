/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
 */

@interface CATEndPoint : NSObject {
    CATAddress * _address;
    NSData * _data;
    unsigned int  _port;
}

@property (nonatomic, readonly) CATAddress *address;
@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) unsigned int port;

- (void).cxx_destruct;
- (id)address;
- (id)data;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithAddress:(id)arg1 port:(unsigned int)arg2;
- (id)initWithData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToEndPoint:(id)arg1;
- (unsigned int)port;

@end
