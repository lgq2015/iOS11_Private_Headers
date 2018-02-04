/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface SFVisibleSectionHeaderFeedback : SFFeedback {
    unsigned long long  _headerType;
    SFResultSection * _section;
}

@property (nonatomic) unsigned long long headerType;
@property (nonatomic, copy) SFResultSection *section;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)headerType;
- (id)initWithCoder:(id)arg1;
- (id)initWithSection:(id)arg1 headerType:(unsigned long long)arg2;
- (id)section;
- (void)setHeaderType:(unsigned long long)arg1;
- (void)setSection:(id)arg1;

@end
