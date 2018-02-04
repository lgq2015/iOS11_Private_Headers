/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCEStock : NSObject {
    TSUSparseArray * _attributes;
    NSDate * _date;
    NSString * _symbol;
}

@property (nonatomic, readonly) TSUSparseArray *attributes;
@property (nonatomic, retain) NSDate *date;
@property (nonatomic, readonly) NSString *dateString;
@property (nonatomic, retain) NSString *symbol;
@property (nonatomic, readonly) bool up;

+ (id)kNilStockAttributeString;
+ (id)nativeLocaleIdentifier;
+ (id)stockFromArchive:(const struct StockArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x5; double x6; struct RepeatedPtrField<TSCE::StockArchive_AttributeEntry> { void **x_7_1_1; int x_7_1_2; int x_7_1_3; int x_7_1_4; } x7; }*)arg1;
+ (id)stockWithAttributes:(id)arg1;

- (void).cxx_destruct;
- (id)abbreviatedNumberForAttribute:(long long)arg1 atLocale:(id)arg2;
- (id)attributes;
- (id)date;
- (id)dateString;
- (void)encodeToArchive:(struct StockArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x5; double x6; struct RepeatedPtrField<TSCE::StockArchive_AttributeEntry> { void **x_7_1_1; int x_7_1_2; int x_7_1_3; int x_7_1_4; } x7; }*)arg1;
- (id)init;
- (id)initFromArchive:(const struct StockArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x5; double x6; struct RepeatedPtrField<TSCE::StockArchive_AttributeEntry> { void **x_7_1_1; int x_7_1_2; int x_7_1_3; int x_7_1_4; } x7; }*)arg1;
- (id)initWithAttributes:(id)arg1;
- (id)initWithSymbol:(id)arg1;
- (void)p_populateAttributesFromArray:(id)arg1;
- (void)p_setFormattedAttr:(long long)arg1 fromArray:(id)arg2;
- (void)setDate:(id)arg1;
- (void)setSymbol:(id)arg1;
- (id)symbol;
- (bool)up;
- (id)valueForAttribute:(long long)arg1;
- (id)valueForAttribute:(long long)arg1 forLocale:(id)arg2;

@end
