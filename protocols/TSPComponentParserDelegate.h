/* made by EzioChiu.
 */

@protocol TSPComponentParserDelegate <NSObject>

@required

- (bool)componentParser:(TSPComponentParser *)arg1 didReadArchiveInfo:(const struct ArchiveInfo { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; unsigned long long x5; struct RepeatedPtrField<TSP::MessageInfo> { void **x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; } x6; bool x7; }*)arg2 stream:(struct DispatchDataInputStream { int (**x1)(); id x2; unsigned long long x3; id x4; char *x5; }*)arg3 error:(id*)arg4;

@end
