/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCProblem : NSObject <NSCopying, NSSecureCoding> {
    NSSet * _effectedRecordNames;
    int  _type;
}

@property (nonatomic, readonly) NSSet *effectedRecordNames;
@property (nonatomic, readonly) int type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)effectedRecordNames;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProblem:(id)arg1;
- (id)initWithType:(int)arg1 recordName:(id)arg2;
- (void)mergeWithProblem:(id)arg1;
- (int)type;

@end
