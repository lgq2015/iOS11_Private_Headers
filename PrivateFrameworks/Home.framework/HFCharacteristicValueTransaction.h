/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFCharacteristicValueTransaction : NSObject {
    NSDictionary * _actionSetErrorsKeyedByUUID;
    NSMutableSet * _actionSetsToExecute;
    NSMutableSet * _characteristicsToRead;
    NSMutableArray * _clientReasonsStack;
    NAFuture * _commitFuture;
    HFUpdateLogger * _logger;
    bool  _loggerIsExternal;
    NSObject<OS_dispatch_group> * _onFinishGroup;
    NSError * _overallReadError;
    NSError * _overallWriteError;
    NSMutableDictionary * _readFuturesKeyedByCharacteristicIdentifier;
    HFMutableAggregatedCharacteristicReadPolicy * _readPolicy;
    NSMutableSet * _writeCharacteristicRequests;
    NSMutableDictionary * _writeFuturesKeyedByCharacteristicIdentifier;
}

@property (nonatomic, retain) NSDictionary *actionSetErrorsKeyedByUUID;
@property (nonatomic, retain) NSMutableSet *actionSetsToExecute;
@property (nonatomic, retain) NSMutableSet *characteristicsToRead;
@property (nonatomic, retain) NSMutableArray *clientReasonsStack;
@property (nonatomic, retain) NAFuture *commitFuture;
@property (nonatomic, retain) HFUpdateLogger *logger;
@property (nonatomic) bool loggerIsExternal;
@property (nonatomic, retain) NSObject<OS_dispatch_group> *onFinishGroup;
@property (nonatomic, retain) NSError *overallReadError;
@property (nonatomic, retain) NSError *overallWriteError;
@property (nonatomic, retain) NSMutableDictionary *readFuturesKeyedByCharacteristicIdentifier;
@property (nonatomic, retain) HFMutableAggregatedCharacteristicReadPolicy *readPolicy;
@property (nonatomic, retain) NSMutableSet *writeCharacteristicRequests;
@property (nonatomic, retain) NSMutableDictionary *writeFuturesKeyedByCharacteristicIdentifier;

- (void).cxx_destruct;
- (id)actionSetErrorsKeyedByUUID;
- (id)actionSetsToExecute;
- (id)characteristicsToRead;
- (id)clientReasonsStack;
- (id)commitFuture;
- (id)executionErrorForActionSet:(id)arg1;
- (id)init;
- (id)logger;
- (bool)loggerIsExternal;
- (id)onFinishGroup;
- (id)overallReadError;
- (id)overallWriteError;
- (id)readFuturesKeyedByCharacteristicIdentifier;
- (id)readPolicy;
- (void)setActionSetErrorsKeyedByUUID:(id)arg1;
- (void)setActionSetsToExecute:(id)arg1;
- (void)setCharacteristicsToRead:(id)arg1;
- (void)setClientReasonsStack:(id)arg1;
- (void)setCommitFuture:(id)arg1;
- (void)setLogger:(id)arg1;
- (void)setLoggerIsExternal:(bool)arg1;
- (void)setOnFinishGroup:(id)arg1;
- (void)setOverallReadError:(id)arg1;
- (void)setOverallWriteError:(id)arg1;
- (void)setReadFuturesKeyedByCharacteristicIdentifier:(id)arg1;
- (void)setReadPolicy:(id)arg1;
- (void)setWriteCharacteristicRequests:(id)arg1;
- (void)setWriteFuturesKeyedByCharacteristicIdentifier:(id)arg1;
- (id)writeCharacteristicRequests;
- (id)writeFuturesKeyedByCharacteristicIdentifier;

@end
