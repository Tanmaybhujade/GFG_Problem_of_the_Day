class Sol {
    public static Node deleteNode(Node root, int data) {
        ArrayList<Integer> modifiedDataList = new ArrayList<>();
        modifiedInorder(modifiedDataList, root, data);
        return buildModifiedTree(modifiedDataList, 0, modifiedDataList.size() - 1);
    }
    public static void modifiedInorder(ArrayList<Integer> result, Node currentNode, int data) {
        if (currentNode != null) {
            modifiedInorder(result, currentNode.left, data);
            if (currentNode.data != data) {
                result.add(currentNode.data);
            }
            modifiedInorder(result, currentNode.right, data);
        }
    }
    public static Node buildModifiedTree(ArrayList<Integer> dataList, int startIdx, int endIdx) {
        if (startIdx > endIdx) return null;
        int midIdx = (startIdx + endIdx) / 2;
        Node rootNode = new Node(dataList.get(midIdx));
        rootNode.left = buildModifiedTree(dataList, startIdx, midIdx - 1);
        rootNode.right = buildModifiedTree(dataList, midIdx + 1, endIdx);
        return rootNode;
    }
}
