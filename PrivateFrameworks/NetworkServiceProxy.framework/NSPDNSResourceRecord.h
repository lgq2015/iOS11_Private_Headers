/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
 */

@interface NSPDNSResourceRecord : NSObject {
    unsigned long long  _dataLength;
    NSString * _name;
    long long  _recordClass;
    NSString * _resourceString;
    unsigned long long  _timeToLive;
    long long  _type;
}

@property (readonly) unsigned long long dataLength;
@property (readonly) NSString *name;
@property (readonly) long long recordClass;
@property (readonly) NSString *resourceString;
@property (readonly) unsigned long long timeToLive;
@property (readonly) long long type;

+ (id)typeToString:(long long)arg1;

- (void).cxx_destruct;
- (id)copyStateDictionary;
- (unsigned long long)dataLength;
- (id)initFromByteParser:(id)arg1;
- (id)name;
- (long long)recordClass;
- (id)resourceString;
- (unsigned long long)timeToLive;
- (long long)type;

@end
