/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPPackageEntryInfo : NSObject {
    unsigned int  _CRC;
    unsigned long long  _encodedLength;
    NSDate * _lastModificationDate;
}

@property (nonatomic, readonly) unsigned int CRC;
@property (nonatomic, readonly) unsigned long long encodedLength;
@property (nonatomic, readonly) NSDate *lastModificationDate;

- (void).cxx_destruct;
- (unsigned int)CRC;
- (unsigned long long)encodedLength;
- (id)init;
- (id)initWithEncodedLength:(unsigned long long)arg1 lastModificationDate:(id)arg2 CRC:(unsigned int)arg3;
- (id)lastModificationDate;

@end
