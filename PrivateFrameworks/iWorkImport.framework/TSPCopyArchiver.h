/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPCopyArchiver : TSPArchiver <TSPProxyObjectMappingProvider> {
    <TSPProxyObjectMapping> * _proxyObjectMapping;
}

@property (nonatomic) <TSPProxyObjectMapping> *proxyObjectMapping;
@property (nonatomic, readonly) long long targetType;

- (void).cxx_destruct;
- (id)proxyObjectMapping;
- (void)setProxyObjectMapping:(id)arg1;
- (void)setStrongLazyReference:(id)arg1 message:(struct Reference { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; unsigned long long x5; int x6; bool x7; }*)arg2;
- (void)setStrongReference:(id)arg1 message:(struct Reference { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; unsigned long long x5; int x6; bool x7; }*)arg2;
- (long long)targetType;

@end
