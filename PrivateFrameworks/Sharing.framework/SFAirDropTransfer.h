/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFAirDropTransfer : NSObject <NSCopying, NSSecureCoding> {
    SFAirDropAction * _cancelAction;
    NSArray * _completedURLs;
    NSString * _contentsDescription;
    NSString * _contentsTitle;
    NSURL * _customDestinationURL;
    NSError * _error;
    NSString * _identifier;
    SFAirDropTransferMetaData * _metaData;
    NSArray * _possibleActions;
    id  _progressToken;
    SFAirDropAction * _selectedAction;
    NSProgress * _transferProgress;
    unsigned long long  _transferState;
    unsigned long long  _userResponse;
}

@property (nonatomic, retain) SFAirDropAction *cancelAction;
@property (nonatomic, copy) NSArray *completedURLs;
@property (nonatomic, copy) NSString *contentsDescription;
@property (nonatomic, copy) NSString *contentsTitle;
@property (nonatomic, copy) NSURL *customDestinationURL;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) SFAirDropTransferMetaData *metaData;
@property (nonatomic, readonly) bool needsAction;
@property (nonatomic, retain) NSArray *possibleActions;
@property (nonatomic, retain) id progressToken;
@property (nonatomic, retain) SFAirDropAction *selectedAction;
@property (nonatomic, retain) NSProgress *transferProgress;
@property (nonatomic) unsigned long long transferState;
@property (nonatomic) unsigned long long userResponse;

+ (bool)automaticallyNotifiesObserversOfTransferState;
+ (bool)automaticallyNotifiesObserversOfUserResponse;
+ (id)keyPathsForValuesAffectingNeedsAction;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)cancelAction;
- (id)completedURLs;
- (id)contentsDescription;
- (id)contentsTitle;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customDestinationURL;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 initialInformation:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)metaData;
- (bool)needsAction;
- (id)possibleActions;
- (id)progressToken;
- (id)selectedAction;
- (void)setCancelAction:(id)arg1;
- (void)setCompletedURLs:(id)arg1;
- (void)setContentsDescription:(id)arg1;
- (void)setContentsTitle:(id)arg1;
- (void)setCustomDestinationURL:(id)arg1;
- (void)setError:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setMetaData:(id)arg1;
- (void)setPossibleActions:(id)arg1;
- (void)setProgressToken:(id)arg1;
- (void)setSelectedAction:(id)arg1;
- (void)setTransferProgress:(id)arg1;
- (void)setTransferState:(unsigned long long)arg1;
- (void)setUpProgress;
- (void)setUpProgressToBroadcast:(bool)arg1;
- (void)setUserResponse:(unsigned long long)arg1;
- (id)transferProgress;
- (unsigned long long)transferState;
- (bool)updateUsingCoder:(id)arg1;
- (void)updateWithInformation:(id)arg1;
- (bool)updateWithTransfer:(id)arg1;
- (unsigned long long)userResponse;

@end
