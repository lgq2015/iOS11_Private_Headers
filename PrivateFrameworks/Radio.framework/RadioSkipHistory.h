/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioSkipHistory : NSObject <RadioManagedObjectWrapperProtocol> {
    bool  _databaseBacked;
    NSManagedObject * _managedObject;
    RadioModel * _model;
    NSString * _skipIdentifier;
    NSArray * _skipTimestamps;
    NSString * _stationHash;
    long long  _stationID;
}

@property (getter=isDatabaseBacked, nonatomic, readonly) bool databaseBacked;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSManagedObject *managedObject;
@property (nonatomic, readonly) RadioModel *model;
@property (nonatomic, copy) NSString *skipIdentifier;
@property (nonatomic, copy) NSArray *skipTimestamps;
@property (nonatomic, copy) NSString *stationHash;
@property (nonatomic) long long stationID;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_radioModelWasDeletedNotification:(id)arg1;
- (void)dealloc;
- (unsigned long long)hash;
- (id)initWithModel:(id)arg1 managedObject:(id)arg2;
- (bool)isDatabaseBacked;
- (bool)isEqual:(id)arg1;
- (id)managedObject;
- (id)model;
- (void)setSkipIdentifier:(id)arg1;
- (void)setSkipTimestamps:(id)arg1;
- (void)setStationHash:(id)arg1;
- (void)setStationID:(long long)arg1;
- (id)skipIdentifier;
- (id)skipTimestamps;
- (id)stationHash;
- (long long)stationID;

@end
