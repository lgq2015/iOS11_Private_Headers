/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
 */

@interface ADIDRecord : NSObject {
    NSString * _ID;
    NSData * _encryptedID;
}

@property (nonatomic, retain) NSString *ID;
@property (nonatomic, retain) NSData *encryptedID;

- (void).cxx_destruct;
- (id)ID;
- (id)description;
- (id)dictionaryRepresentation;
- (id)encryptedID;
- (id)init;
- (id)initWithID:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setEncryptedID:(id)arg1;
- (void)setID:(id)arg1;

@end
