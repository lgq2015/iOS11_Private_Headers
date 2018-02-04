/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
 */

@interface ASCodableContactList : PBCodable <NSCopying> {
    NSMutableArray * _contacts;
}

@property (nonatomic, retain) NSMutableArray *contacts;

+ (Class)contactsType;

- (void).cxx_destruct;
- (void)addContacts:(id)arg1;
- (void)clearContacts;
- (id)contacts;
- (id)contactsAtIndex:(unsigned long long)arg1;
- (unsigned long long)contactsCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setContacts:(id)arg1;
- (void)writeTo:(id)arg1;

@end
