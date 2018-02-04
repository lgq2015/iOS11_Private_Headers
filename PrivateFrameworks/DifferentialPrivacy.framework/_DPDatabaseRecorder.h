/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
 */

@interface _DPDatabaseRecorder : _DPDataRecorder {
    NSSet * _blacklistSet;
    _DPStorage * _db;
    unsigned long long  _puzzlePieceCount;
}

@property (nonatomic, readonly) NSSet *blacklistSet;
@property (nonatomic, readonly) _DPStorage *db;
@property (nonatomic, readonly) unsigned long long puzzlePieceCount;

- (void).cxx_destruct;
- (id)blacklistSet;
- (id)db;
- (id)description;
- (id)init;
- (id)initWithKey:(id)arg1 storage:(id)arg2;
- (id)initWithKey:(id)arg1 storage:(id)arg2 systemBlacklistPath:(id)arg3 runtimeBlacklistPath:(id)arg4;
- (unsigned long long)puzzlePieceCount;
- (void)recordNumbers:(id)arg1;
- (void)recordStrings:(id)arg1;
- (void)recordWords:(id)arg1;

@end
