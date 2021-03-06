/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
 */

@interface _DECSearchResult : SFSearchResult <NSSecureCoding> {
    _DECItem * _item;
}

@property (readonly) _DECItem *item;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithItem:(id)arg1;
- (bool)isDecQueryResult;
- (id)item;

@end
