/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
 */

@interface CATTaskProgress : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    NSUUID * _UUID;
    long long  _completedUnitCount;
    NSError * _error;
    bool  _isCancelable;
    bool  _isCanceled;
    unsigned long long  _phase;
    NSString * _requestClassName;
    id  _resultObject;
    long long  _totalUnitCount;
    NSDictionary * _userInfo;
}

@property (nonatomic, copy) NSUUID *UUID;
@property (nonatomic) long long completedUnitCount;
@property (nonatomic, retain) NSError *error;
@property (nonatomic) bool isCancelable;
@property (nonatomic) bool isCanceled;
@property (nonatomic) unsigned long long phase;
@property (nonatomic, copy) NSString *requestClassName;
@property (nonatomic, retain) id resultObject;
@property (nonatomic, readonly) unsigned long long state;
@property (nonatomic) long long totalUnitCount;
@property (nonatomic, retain) NSDictionary *userInfo;

+ (void)assertResultObject:(id)arg1 isValidForRequestClassName:(id)arg2;
+ (Class)classForResultObjectWithRequestClassName:(id)arg1;
+ (id)progressForOperation:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)UUID;
- (long long)completedUnitCount;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithOperation:(id)arg1;
- (id)initWithOperationUUID:(id)arg1;
- (bool)isCancelable;
- (bool)isCanceled;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)phase;
- (id)progressStateDescription;
- (id)requestClassName;
- (id)resultObject;
- (void)setCompletedUnitCount:(long long)arg1;
- (void)setError:(id)arg1;
- (void)setIsCancelable:(bool)arg1;
- (void)setIsCanceled:(bool)arg1;
- (void)setPhase:(unsigned long long)arg1;
- (void)setProgress:(id)arg1;
- (void)setRequestClassName:(id)arg1;
- (void)setResultObject:(id)arg1;
- (void)setTotalUnitCount:(long long)arg1;
- (void)setUUID:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (unsigned long long)state;
- (long long)totalUnitCount;
- (id)userInfo;

@end
