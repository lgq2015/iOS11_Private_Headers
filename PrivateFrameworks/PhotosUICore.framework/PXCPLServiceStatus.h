/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXCPLServiceStatus : NSObject <NSCopying> {
    long long  _action;
    unsigned long long  _activity;
    NSDate * _exitDate;
    unsigned long long  _numberOfItemsFailingToUpload;
    unsigned long long  _numberOfReferencedItems;
    long long  _pauseReason;
    unsigned long long  _pendingNumberOfItems;
    double  _pendingProgress;
    long long  _state;
    NSDate * _syncDate;
}

@property (nonatomic) long long action;
@property (nonatomic) unsigned long long activity;
@property (nonatomic, retain) NSDate *exitDate;
@property (nonatomic) unsigned long long numberOfItemsFailingToUpload;
@property (nonatomic) unsigned long long numberOfReferencedItems;
@property (nonatomic) long long pauseReason;
@property (nonatomic) unsigned long long pendingNumberOfItems;
@property (nonatomic) double pendingProgress;
@property (nonatomic) long long state;
@property (nonatomic, retain) NSDate *syncDate;

- (void).cxx_destruct;
- (long long)action;
- (unsigned long long)activity;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)exitDate;
- (id)init;
- (bool)isEqualToCPLServiceStatus:(id)arg1;
- (unsigned long long)numberOfItemsFailingToUpload;
- (unsigned long long)numberOfReferencedItems;
- (long long)pauseReason;
- (unsigned long long)pendingNumberOfItems;
- (double)pendingProgress;
- (void)setAction:(long long)arg1;
- (void)setActivity:(unsigned long long)arg1;
- (void)setExitDate:(id)arg1;
- (void)setNumberOfItemsFailingToUpload:(unsigned long long)arg1;
- (void)setNumberOfReferencedItems:(unsigned long long)arg1;
- (void)setPauseReason:(long long)arg1;
- (void)setPendingNumberOfItems:(unsigned long long)arg1;
- (void)setPendingProgress:(double)arg1;
- (void)setState:(long long)arg1;
- (void)setSyncDate:(id)arg1;
- (long long)state;
- (id)syncDate;

@end