/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AddressBookLegacy.framework/AddressBookLegacy
 */

@interface ABChangeStoreRowInfo : NSObject {
    NSString * _clientIdentifier;
    int  _consumedSequenceNumber;
}

@property (nonatomic, retain) NSString *clientIdentifier;
@property (nonatomic) int consumedSequenceNumber;

- (id)clientIdentifier;
- (int)consumedSequenceNumber;
- (void)dealloc;
- (id)description;
- (void)setClientIdentifier:(id)arg1;
- (void)setConsumedSequenceNumber:(int)arg1;

@end
